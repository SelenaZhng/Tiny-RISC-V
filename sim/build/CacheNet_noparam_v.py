
#=========================================================================
# VCacheNet_noparam_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import copy
import os
import gc
import weakref

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff
from pymtl3.passes.backends.verilog import *

#-------------------------------------------------------------------------
# CacheNet_noparam
#-------------------------------------------------------------------------

class CacheNet_noparam( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        uint8_t * clk;        
        uint8_t * reset;        
        uint32_t * net2cache_reqstream_msg[4];        
        uint8_t * net2cache_reqstream_rdy[4];        
        uint8_t * net2cache_reqstream_val[4];        
        uint64_t * net2cache_respstream_msg[4];        
        uint8_t * net2cache_respstream_rdy[4];        
        uint8_t * net2cache_respstream_val[4];        
        uint32_t * proc2net_reqstream_msg[4];        
        uint8_t * proc2net_reqstream_rdy[4];        
        uint8_t * proc2net_reqstream_val[4];        
        uint64_t * proc2net_respstream_msg[4];        
        uint8_t * proc2net_respstream_rdy[4];        
        uint8_t * proc2net_respstream_val[4];

        // Verilator model
        void * _cffi_model;

        // Verilator simulation context
        void * _cffi_context_ptr;

        // VCD state
        int _cffi_vcd_en;

        // VCD tracing helpers
        void *       _cffi_tfp;
        unsigned int _cffi_trace_time;

        // Verilog line trace buffer
        char _cffi_line_trace_str[512];

      } VCacheNet_noparam_t;

      VCacheNet_noparam_t * VCacheNet_noparam_create_model( const char * );
      void VCacheNet_noparam_destroy_model( VCacheNet_noparam_t *);
      void VCacheNet_noparam_comb_eval( VCacheNet_noparam_t * );
      void VCacheNet_noparam_seq_eval( VCacheNet_noparam_t * );
      void VCacheNet_noparam_assert_on( VCacheNet_noparam_t *, bool );
      bool VCacheNet_noparam_has_assert_fired( VCacheNet_noparam_t * );
      void VCacheNet_noparam_line_trace( VCacheNet_noparam_t *, char * );

    """)

    # Print the modification time stamp of the shared lib
    # print('Modification time of {}: {}'.format(
    #       'libCacheNet_noparam_v.so', os.path.getmtime( './libCacheNet_noparam_v.so' ) ))

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    # NOTE: the RTLD_NODELETE flag is necessary in this dlopen() to make sure
    # all loaded shared libraries stick to the current processes (i.e., cannot
    # be unloaded) until the exit of the main process. This behavior is necessary
    # to avoid segfaults at exits due to destruction of thread-local variables,
    # which are heavily used in Verilator's runtime library.
    s._ffi_inst = s.ffi.dlopen('./libCacheNet_noparam_v.so', s.ffi.RTLD_NODELETE | s.ffi.RTLD_NOW)

    # increment instance count
    CacheNet_noparam.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    # print(f"In finalize() method of an instance of {str(s.__class__)}")
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1

    # Clean up python side FFI references
    s._convert_string = None

    s._ffi_inst.VCacheNet_noparam_destroy_model( s._ffi_m )
    # print("End of finalize()")

  def __del__( s ):
    # print(f"In __del__() method of an instance of {str(s.__class__)}")
    if s._finalization_count == 0:
      s._finalization_count += 1

      # Clean up python side FFI references
      s._convert_string = None

      s._ffi_inst.VCacheNet_noparam_destroy_model( s._ffi_m )
    # print("End of __del__")

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if int(s._ip_cfg.vl_trace):
      if bool(s._ip_cfg.vl_trace_filename):
        verilator_vcd_file = f"{s._ip_cfg.vl_trace_filename}.verilator1.vcd"
      else:
        verilator_vcd_file = "CacheNet_noparam.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    # PP: we need to keep the new'ed object alive by assigning it to
    # a variable. See more about this:
    # https://cffi.readthedocs.io/en/stable/ref.html#ffi-new
    ffi_vl_vcd_file = s.ffi.new("char[]", verilator_vcd_file)
    s._ffi_m = s._ffi_inst.VCacheNet_noparam_create_model( ffi_vl_vcd_file )

    # Buffer for line tracing
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.VCacheNet_noparam_comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.VCacheNet_noparam_seq_eval

    # declare the port interface
    s.net2cache = [ MemRequesterIfc( MemReqMsg__type__4__opaque_8__addr_32__len_2__data_32, MemRespMsg__type__4__opaque_8__test_2__len_2__data_32 ) for _ in range(4) ]
    s.proc2net = [ MemResponderIfc( MemReqMsg__type__4__opaque_8__addr_32__len_2__data_32, MemRespMsg__type__4__opaque_8__test_2__len_2__data_32 ) for _ in range(4) ]

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_rdy():
      s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_rdy @= s.net2cache[0].reqstream.rdy
    
    s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_rdy():
      s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_rdy @= s.net2cache[1].reqstream.rdy
    
    s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_rdy():
      s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_rdy @= s.net2cache[2].reqstream.rdy
    
    s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_rdy():
      s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_rdy @= s.net2cache[3].reqstream.rdy
    
    s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def istruct_s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_msg():
      s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_msg @= s.net2cache[0].respstream.msg
    
    s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def istruct_s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_msg():
      s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_msg @= s.net2cache[1].respstream.msg
    
    s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def istruct_s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_msg():
      s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_msg @= s.net2cache[2].respstream.msg
    
    s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def istruct_s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_msg():
      s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_msg @= s.net2cache[3].respstream.msg
    
    s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_val():
      s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_val @= s.net2cache[0].respstream.val
    
    s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_val():
      s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_val @= s.net2cache[1].respstream.val
    
    s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_val():
      s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_val @= s.net2cache[2].respstream.val
    
    s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_val():
      s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_val @= s.net2cache[3].respstream.val
    
    s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def istruct_s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_msg():
      s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_msg @= s.proc2net[0].reqstream.msg
    
    s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def istruct_s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_msg():
      s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_msg @= s.proc2net[1].reqstream.msg
    
    s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def istruct_s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_msg():
      s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_msg @= s.proc2net[2].reqstream.msg
    
    s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def istruct_s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_msg():
      s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_msg @= s.proc2net[3].reqstream.msg
    
    s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_val():
      s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_val @= s.proc2net[0].reqstream.val
    
    s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_val():
      s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_val @= s.proc2net[1].reqstream.val
    
    s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_val():
      s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_val @= s.proc2net[2].reqstream.val
    
    s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_val():
      s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_val @= s.proc2net[3].reqstream.val
    
    s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_rdy():
      s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_rdy @= s.proc2net[0].respstream.rdy
    
    s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_rdy():
      s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_rdy @= s.proc2net[1].respstream.rdy
    
    s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_rdy():
      s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_rdy @= s.proc2net[2].respstream.rdy
    
    s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_rdy():
      s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_rdy @= s.proc2net[3].respstream.rdy
    
    s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def ostruct_s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg():
      s.net2cache[0].reqstream.msg.data @= s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[0:32]
      s.net2cache[0].reqstream.msg.len @= s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[32:34]
      s.net2cache[0].reqstream.msg.addr @= s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[34:66]
      s.net2cache[0].reqstream.msg.opaque @= s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[66:74]
      s.net2cache[0].reqstream.msg.type_ @= s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[74:78]
    
    s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def ostruct_s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg():
      s.net2cache[1].reqstream.msg.data @= s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[0:32]
      s.net2cache[1].reqstream.msg.len @= s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[32:34]
      s.net2cache[1].reqstream.msg.addr @= s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[34:66]
      s.net2cache[1].reqstream.msg.opaque @= s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[66:74]
      s.net2cache[1].reqstream.msg.type_ @= s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[74:78]
    
    s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def ostruct_s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg():
      s.net2cache[2].reqstream.msg.data @= s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[0:32]
      s.net2cache[2].reqstream.msg.len @= s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[32:34]
      s.net2cache[2].reqstream.msg.addr @= s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[34:66]
      s.net2cache[2].reqstream.msg.opaque @= s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[66:74]
      s.net2cache[2].reqstream.msg.type_ @= s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[74:78]
    
    s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg = Wire( Bits78 )
    @update
    def ostruct_s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg():
      s.net2cache[3].reqstream.msg.data @= s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[0:32]
      s.net2cache[3].reqstream.msg.len @= s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[32:34]
      s.net2cache[3].reqstream.msg.addr @= s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[34:66]
      s.net2cache[3].reqstream.msg.opaque @= s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[66:74]
      s.net2cache[3].reqstream.msg.type_ @= s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[74:78]
    
    s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_val():
      s.net2cache[0].reqstream.val @= s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_val
    
    s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_val():
      s.net2cache[1].reqstream.val @= s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_val
    
    s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_val():
      s.net2cache[2].reqstream.val @= s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_val
    
    s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_val():
      s.net2cache[3].reqstream.val @= s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_val
    
    s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_rdy():
      s.net2cache[0].respstream.rdy @= s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_rdy
    
    s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_rdy():
      s.net2cache[1].respstream.rdy @= s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_rdy
    
    s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_rdy():
      s.net2cache[2].respstream.rdy @= s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_rdy
    
    s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_rdy():
      s.net2cache[3].respstream.rdy @= s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_rdy
    
    s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_rdy():
      s.proc2net[0].reqstream.rdy @= s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_rdy
    
    s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_rdy():
      s.proc2net[1].reqstream.rdy @= s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_rdy
    
    s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_rdy():
      s.proc2net[2].reqstream.rdy @= s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_rdy
    
    s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_rdy():
      s.proc2net[3].reqstream.rdy @= s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_rdy
    
    s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def ostruct_s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg():
      s.proc2net[0].respstream.msg.data @= s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg[0:32]
      s.proc2net[0].respstream.msg.len @= s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg[32:34]
      s.proc2net[0].respstream.msg.test @= s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg[34:36]
      s.proc2net[0].respstream.msg.opaque @= s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg[36:44]
      s.proc2net[0].respstream.msg.type_ @= s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg[44:48]
    
    s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def ostruct_s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg():
      s.proc2net[1].respstream.msg.data @= s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg[0:32]
      s.proc2net[1].respstream.msg.len @= s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg[32:34]
      s.proc2net[1].respstream.msg.test @= s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg[34:36]
      s.proc2net[1].respstream.msg.opaque @= s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg[36:44]
      s.proc2net[1].respstream.msg.type_ @= s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg[44:48]
    
    s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def ostruct_s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg():
      s.proc2net[2].respstream.msg.data @= s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg[0:32]
      s.proc2net[2].respstream.msg.len @= s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg[32:34]
      s.proc2net[2].respstream.msg.test @= s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg[34:36]
      s.proc2net[2].respstream.msg.opaque @= s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg[36:44]
      s.proc2net[2].respstream.msg.type_ @= s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg[44:48]
    
    s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg = Wire( Bits48 )
    @update
    def ostruct_s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg():
      s.proc2net[3].respstream.msg.data @= s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg[0:32]
      s.proc2net[3].respstream.msg.len @= s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg[32:34]
      s.proc2net[3].respstream.msg.test @= s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg[34:36]
      s.proc2net[3].respstream.msg.opaque @= s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg[36:44]
      s.proc2net[3].respstream.msg.type_ @= s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg[44:48]
    
    s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_val():
      s.proc2net[0].respstream.val @= s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_val
    
    s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_val():
      s.proc2net[1].respstream.val @= s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_val
    
    s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_val():
      s.proc2net[2].respstream.val @= s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_val
    
    s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_val():
      s.proc2net[3].respstream.val @= s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_val

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.net2cache_reqstream_rdy[0][0] = int(s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_rdy)
      
      _ffi_m.net2cache_reqstream_rdy[1][0] = int(s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_rdy)
      
      _ffi_m.net2cache_reqstream_rdy[2][0] = int(s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_rdy)
      
      _ffi_m.net2cache_reqstream_rdy[3][0] = int(s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_rdy)
      
      _ffi_m.net2cache_respstream_msg[0][0] = int(s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_msg)
      
      _ffi_m.net2cache_respstream_msg[1][0] = int(s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_msg)
      
      _ffi_m.net2cache_respstream_msg[2][0] = int(s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_msg)
      
      _ffi_m.net2cache_respstream_msg[3][0] = int(s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_msg)
      
      _ffi_m.net2cache_respstream_val[0][0] = int(s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_val)
      
      _ffi_m.net2cache_respstream_val[1][0] = int(s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_val)
      
      _ffi_m.net2cache_respstream_val[2][0] = int(s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_val)
      
      _ffi_m.net2cache_respstream_val[3][0] = int(s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_val)
      
      x = _ffi_m.proc2net_reqstream_msg[0]
      x[0] = int(s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_msg[0:32])
      x[1] = int(s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_msg[32:64])
      x[2] = int(s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_msg[64:78])
      
      x = _ffi_m.proc2net_reqstream_msg[1]
      x[0] = int(s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_msg[0:32])
      x[1] = int(s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_msg[32:64])
      x[2] = int(s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_msg[64:78])
      
      x = _ffi_m.proc2net_reqstream_msg[2]
      x[0] = int(s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_msg[0:32])
      x[1] = int(s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_msg[32:64])
      x[2] = int(s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_msg[64:78])
      
      x = _ffi_m.proc2net_reqstream_msg[3]
      x[0] = int(s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_msg[0:32])
      x[1] = int(s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_msg[32:64])
      x[2] = int(s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_msg[64:78])
      
      _ffi_m.proc2net_reqstream_val[0][0] = int(s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_val)
      
      _ffi_m.proc2net_reqstream_val[1][0] = int(s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_val)
      
      _ffi_m.proc2net_reqstream_val[2][0] = int(s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_val)
      
      _ffi_m.proc2net_reqstream_val[3][0] = int(s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_val)
      
      _ffi_m.proc2net_respstream_rdy[0][0] = int(s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_rdy)
      
      _ffi_m.proc2net_respstream_rdy[1][0] = int(s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_rdy)
      
      _ffi_m.proc2net_respstream_rdy[2][0] = int(s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_rdy)
      
      _ffi_m.proc2net_respstream_rdy[3][0] = int(s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_rdy)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      x = _ffi_m.net2cache_reqstream_msg[0]
      s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_msg[64:78] @= x[2]
      
      x = _ffi_m.net2cache_reqstream_msg[1]
      s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_msg[64:78] @= x[2]
      
      x = _ffi_m.net2cache_reqstream_msg[2]
      s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_msg[64:78] @= x[2]
      
      x = _ffi_m.net2cache_reqstream_msg[3]
      s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[0:32] @= x[0]
      s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[32:64] @= x[1]
      s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_msg[64:78] @= x[2]
      
      s.s_DOT_net2cache_LB_0_RB__DOT_reqstream_DOT_val @= _ffi_m.net2cache_reqstream_val[0][0]
      
      s.s_DOT_net2cache_LB_1_RB__DOT_reqstream_DOT_val @= _ffi_m.net2cache_reqstream_val[1][0]
      
      s.s_DOT_net2cache_LB_2_RB__DOT_reqstream_DOT_val @= _ffi_m.net2cache_reqstream_val[2][0]
      
      s.s_DOT_net2cache_LB_3_RB__DOT_reqstream_DOT_val @= _ffi_m.net2cache_reqstream_val[3][0]
      
      s.s_DOT_net2cache_LB_0_RB__DOT_respstream_DOT_rdy @= _ffi_m.net2cache_respstream_rdy[0][0]
      
      s.s_DOT_net2cache_LB_1_RB__DOT_respstream_DOT_rdy @= _ffi_m.net2cache_respstream_rdy[1][0]
      
      s.s_DOT_net2cache_LB_2_RB__DOT_respstream_DOT_rdy @= _ffi_m.net2cache_respstream_rdy[2][0]
      
      s.s_DOT_net2cache_LB_3_RB__DOT_respstream_DOT_rdy @= _ffi_m.net2cache_respstream_rdy[3][0]
      
      s.s_DOT_proc2net_LB_0_RB__DOT_reqstream_DOT_rdy @= _ffi_m.proc2net_reqstream_rdy[0][0]
      
      s.s_DOT_proc2net_LB_1_RB__DOT_reqstream_DOT_rdy @= _ffi_m.proc2net_reqstream_rdy[1][0]
      
      s.s_DOT_proc2net_LB_2_RB__DOT_reqstream_DOT_rdy @= _ffi_m.proc2net_reqstream_rdy[2][0]
      
      s.s_DOT_proc2net_LB_3_RB__DOT_reqstream_DOT_rdy @= _ffi_m.proc2net_reqstream_rdy[3][0]
      
      s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_msg @= _ffi_m.proc2net_respstream_msg[0][0]
      
      s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_msg @= _ffi_m.proc2net_respstream_msg[1][0]
      
      s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_msg @= _ffi_m.proc2net_respstream_msg[2][0]
      
      s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_msg @= _ffi_m.proc2net_respstream_msg[3][0]
      
      s.s_DOT_proc2net_LB_0_RB__DOT_respstream_DOT_val @= _ffi_m.proc2net_respstream_val[0][0]
      
      s.s_DOT_proc2net_LB_1_RB__DOT_respstream_DOT_val @= _ffi_m.proc2net_respstream_val[1][0]
      
      s.s_DOT_proc2net_LB_2_RB__DOT_respstream_DOT_val @= _ffi_m.proc2net_respstream_val[2][0]
      
      s.s_DOT_proc2net_LB_3_RB__DOT_respstream_DOT_val @= _ffi_m.proc2net_respstream_val[3][0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

      if s._ffi_inst.VCacheNet_noparam_has_assert_fired( _ffi_m ):
        raise AssertionError("A Verilog assertion fired in the Verilator simulation!")

  def assert_on( s, enable ):
    assert isinstance( enable, bool )
    s._ffi_inst.VCacheNet_noparam_assert_on( s._ffi_m, enable )

  def line_trace( s ):
    if 1:
      s._ffi_inst.VCacheNet_noparam_line_trace( s._ffi_m, s._ffi_m._cffi_line_trace_str )
      return s._convert_string( s._ffi_m._cffi_line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, reset={s.reset}, net2cache[0].reqstream.msg={s.net2cache[0].reqstream.msg}, net2cache[1].reqstream.msg={s.net2cache[1].reqstream.msg}, net2cache[2].reqstream.msg={s.net2cache[2].reqstream.msg}, net2cache[3].reqstream.msg={s.net2cache[3].reqstream.msg}, net2cache[0].reqstream.rdy={s.net2cache[0].reqstream.rdy}, net2cache[1].reqstream.rdy={s.net2cache[1].reqstream.rdy}, net2cache[2].reqstream.rdy={s.net2cache[2].reqstream.rdy}, net2cache[3].reqstream.rdy={s.net2cache[3].reqstream.rdy}, net2cache[0].reqstream.val={s.net2cache[0].reqstream.val}, net2cache[1].reqstream.val={s.net2cache[1].reqstream.val}, net2cache[2].reqstream.val={s.net2cache[2].reqstream.val}, net2cache[3].reqstream.val={s.net2cache[3].reqstream.val}, net2cache[0].respstream.msg={s.net2cache[0].respstream.msg}, net2cache[1].respstream.msg={s.net2cache[1].respstream.msg}, net2cache[2].respstream.msg={s.net2cache[2].respstream.msg}, net2cache[3].respstream.msg={s.net2cache[3].respstream.msg}, net2cache[0].respstream.rdy={s.net2cache[0].respstream.rdy}, net2cache[1].respstream.rdy={s.net2cache[1].respstream.rdy}, net2cache[2].respstream.rdy={s.net2cache[2].respstream.rdy}, net2cache[3].respstream.rdy={s.net2cache[3].respstream.rdy}, net2cache[0].respstream.val={s.net2cache[0].respstream.val}, net2cache[1].respstream.val={s.net2cache[1].respstream.val}, net2cache[2].respstream.val={s.net2cache[2].respstream.val}, net2cache[3].respstream.val={s.net2cache[3].respstream.val}, proc2net[0].reqstream.msg={s.proc2net[0].reqstream.msg}, proc2net[1].reqstream.msg={s.proc2net[1].reqstream.msg}, proc2net[2].reqstream.msg={s.proc2net[2].reqstream.msg}, proc2net[3].reqstream.msg={s.proc2net[3].reqstream.msg}, proc2net[0].reqstream.rdy={s.proc2net[0].reqstream.rdy}, proc2net[1].reqstream.rdy={s.proc2net[1].reqstream.rdy}, proc2net[2].reqstream.rdy={s.proc2net[2].reqstream.rdy}, proc2net[3].reqstream.rdy={s.proc2net[3].reqstream.rdy}, proc2net[0].reqstream.val={s.proc2net[0].reqstream.val}, proc2net[1].reqstream.val={s.proc2net[1].reqstream.val}, proc2net[2].reqstream.val={s.proc2net[2].reqstream.val}, proc2net[3].reqstream.val={s.proc2net[3].reqstream.val}, proc2net[0].respstream.msg={s.proc2net[0].respstream.msg}, proc2net[1].respstream.msg={s.proc2net[1].respstream.msg}, proc2net[2].respstream.msg={s.proc2net[2].respstream.msg}, proc2net[3].respstream.msg={s.proc2net[3].respstream.msg}, proc2net[0].respstream.rdy={s.proc2net[0].respstream.rdy}, proc2net[1].respstream.rdy={s.proc2net[1].respstream.rdy}, proc2net[2].respstream.rdy={s.proc2net[2].respstream.rdy}, proc2net[3].respstream.rdy={s.proc2net[3].respstream.rdy}, proc2net[0].respstream.val={s.proc2net[0].respstream.val}, proc2net[1].respstream.val={s.proc2net[1].respstream.val}, proc2net[2].respstream.val={s.proc2net[2].respstream.val}, proc2net[3].respstream.val={s.proc2net[3].respstream.val},'

  def internal_line_trace( s ):
    return ''
