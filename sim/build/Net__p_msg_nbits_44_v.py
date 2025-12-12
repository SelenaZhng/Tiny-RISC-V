
#=========================================================================
# VNet__p_msg_nbits_44_v.py
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
# Net__p_msg_nbits_44
#-------------------------------------------------------------------------

class Net__p_msg_nbits_44( Component ):
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
        uint64_t * istream_msg[4];        
        uint8_t * istream_rdy[4];        
        uint8_t * istream_val[4];        
        uint64_t * ostream_msg[4];        
        uint8_t * ostream_rdy[4];        
        uint8_t * ostream_val[4];

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

      } VNet__p_msg_nbits_44_t;

      VNet__p_msg_nbits_44_t * VNet__p_msg_nbits_44_create_model( const char * );
      void VNet__p_msg_nbits_44_destroy_model( VNet__p_msg_nbits_44_t *);
      void VNet__p_msg_nbits_44_comb_eval( VNet__p_msg_nbits_44_t * );
      void VNet__p_msg_nbits_44_seq_eval( VNet__p_msg_nbits_44_t * );
      void VNet__p_msg_nbits_44_assert_on( VNet__p_msg_nbits_44_t *, bool );
      bool VNet__p_msg_nbits_44_has_assert_fired( VNet__p_msg_nbits_44_t * );
      void VNet__p_msg_nbits_44_line_trace( VNet__p_msg_nbits_44_t *, char * );

    """)

    # Print the modification time stamp of the shared lib
    # print('Modification time of {}: {}'.format(
    #       'libNet__p_msg_nbits_44_v.so', os.path.getmtime( './libNet__p_msg_nbits_44_v.so' ) ))

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    # NOTE: the RTLD_NODELETE flag is necessary in this dlopen() to make sure
    # all loaded shared libraries stick to the current processes (i.e., cannot
    # be unloaded) until the exit of the main process. This behavior is necessary
    # to avoid segfaults at exits due to destruction of thread-local variables,
    # which are heavily used in Verilator's runtime library.
    s._ffi_inst = s.ffi.dlopen('./libNet__p_msg_nbits_44_v.so', s.ffi.RTLD_NODELETE | s.ffi.RTLD_NOW)

    # increment instance count
    Net__p_msg_nbits_44.id_ += 1

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

    s._ffi_inst.VNet__p_msg_nbits_44_destroy_model( s._ffi_m )
    # print("End of finalize()")

  def __del__( s ):
    # print(f"In __del__() method of an instance of {str(s.__class__)}")
    if s._finalization_count == 0:
      s._finalization_count += 1

      # Clean up python side FFI references
      s._convert_string = None

      s._ffi_inst.VNet__p_msg_nbits_44_destroy_model( s._ffi_m )
    # print("End of __del__")

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if int(s._ip_cfg.vl_trace):
      if bool(s._ip_cfg.vl_trace_filename):
        verilator_vcd_file = f"{s._ip_cfg.vl_trace_filename}.verilator1.vcd"
      else:
        verilator_vcd_file = "Net__p_msg_nbits_44.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    # PP: we need to keep the new'ed object alive by assigning it to
    # a variable. See more about this:
    # https://cffi.readthedocs.io/en/stable/ref.html#ffi-new
    ffi_vl_vcd_file = s.ffi.new("char[]", verilator_vcd_file)
    s._ffi_m = s._ffi_inst.VNet__p_msg_nbits_44_create_model( ffi_vl_vcd_file )

    # Buffer for line tracing
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.VNet__p_msg_nbits_44_comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.VNet__p_msg_nbits_44_seq_eval

    # declare the port interface
    s.istream = [ IStreamIfc( NetMsg__src_2__dest_2__opaque_8__payload_32 ) for _ in range(4) ]
    s.ostream = [ OStreamIfc( NetMsg__src_2__dest_2__opaque_8__payload_32 ) for _ in range(4) ]

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_istream_LB_0_RB__DOT_msg = Wire( Bits44 )
    @update
    def istruct_s_DOT_istream_LB_0_RB__DOT_msg():
      s.s_DOT_istream_LB_0_RB__DOT_msg @= s.istream[0].msg
    
    s.s_DOT_istream_LB_1_RB__DOT_msg = Wire( Bits44 )
    @update
    def istruct_s_DOT_istream_LB_1_RB__DOT_msg():
      s.s_DOT_istream_LB_1_RB__DOT_msg @= s.istream[1].msg
    
    s.s_DOT_istream_LB_2_RB__DOT_msg = Wire( Bits44 )
    @update
    def istruct_s_DOT_istream_LB_2_RB__DOT_msg():
      s.s_DOT_istream_LB_2_RB__DOT_msg @= s.istream[2].msg
    
    s.s_DOT_istream_LB_3_RB__DOT_msg = Wire( Bits44 )
    @update
    def istruct_s_DOT_istream_LB_3_RB__DOT_msg():
      s.s_DOT_istream_LB_3_RB__DOT_msg @= s.istream[3].msg
    
    s.s_DOT_istream_LB_0_RB__DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_istream_LB_0_RB__DOT_val():
      s.s_DOT_istream_LB_0_RB__DOT_val @= s.istream[0].val
    
    s.s_DOT_istream_LB_1_RB__DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_istream_LB_1_RB__DOT_val():
      s.s_DOT_istream_LB_1_RB__DOT_val @= s.istream[1].val
    
    s.s_DOT_istream_LB_2_RB__DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_istream_LB_2_RB__DOT_val():
      s.s_DOT_istream_LB_2_RB__DOT_val @= s.istream[2].val
    
    s.s_DOT_istream_LB_3_RB__DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_istream_LB_3_RB__DOT_val():
      s.s_DOT_istream_LB_3_RB__DOT_val @= s.istream[3].val
    
    s.s_DOT_ostream_LB_0_RB__DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_ostream_LB_0_RB__DOT_rdy():
      s.s_DOT_ostream_LB_0_RB__DOT_rdy @= s.ostream[0].rdy
    
    s.s_DOT_ostream_LB_1_RB__DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_ostream_LB_1_RB__DOT_rdy():
      s.s_DOT_ostream_LB_1_RB__DOT_rdy @= s.ostream[1].rdy
    
    s.s_DOT_ostream_LB_2_RB__DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_ostream_LB_2_RB__DOT_rdy():
      s.s_DOT_ostream_LB_2_RB__DOT_rdy @= s.ostream[2].rdy
    
    s.s_DOT_ostream_LB_3_RB__DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_ostream_LB_3_RB__DOT_rdy():
      s.s_DOT_ostream_LB_3_RB__DOT_rdy @= s.ostream[3].rdy
    
    s.s_DOT_istream_LB_0_RB__DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_istream_LB_0_RB__DOT_rdy():
      s.istream[0].rdy @= s.s_DOT_istream_LB_0_RB__DOT_rdy
    
    s.s_DOT_istream_LB_1_RB__DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_istream_LB_1_RB__DOT_rdy():
      s.istream[1].rdy @= s.s_DOT_istream_LB_1_RB__DOT_rdy
    
    s.s_DOT_istream_LB_2_RB__DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_istream_LB_2_RB__DOT_rdy():
      s.istream[2].rdy @= s.s_DOT_istream_LB_2_RB__DOT_rdy
    
    s.s_DOT_istream_LB_3_RB__DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_istream_LB_3_RB__DOT_rdy():
      s.istream[3].rdy @= s.s_DOT_istream_LB_3_RB__DOT_rdy
    
    s.s_DOT_ostream_LB_0_RB__DOT_msg = Wire( Bits44 )
    @update
    def ostruct_s_DOT_ostream_LB_0_RB__DOT_msg():
      s.ostream[0].msg.payload @= s.s_DOT_ostream_LB_0_RB__DOT_msg[0:32]
      s.ostream[0].msg.opaque @= s.s_DOT_ostream_LB_0_RB__DOT_msg[32:40]
      s.ostream[0].msg.dest @= s.s_DOT_ostream_LB_0_RB__DOT_msg[40:42]
      s.ostream[0].msg.src @= s.s_DOT_ostream_LB_0_RB__DOT_msg[42:44]
    
    s.s_DOT_ostream_LB_1_RB__DOT_msg = Wire( Bits44 )
    @update
    def ostruct_s_DOT_ostream_LB_1_RB__DOT_msg():
      s.ostream[1].msg.payload @= s.s_DOT_ostream_LB_1_RB__DOT_msg[0:32]
      s.ostream[1].msg.opaque @= s.s_DOT_ostream_LB_1_RB__DOT_msg[32:40]
      s.ostream[1].msg.dest @= s.s_DOT_ostream_LB_1_RB__DOT_msg[40:42]
      s.ostream[1].msg.src @= s.s_DOT_ostream_LB_1_RB__DOT_msg[42:44]
    
    s.s_DOT_ostream_LB_2_RB__DOT_msg = Wire( Bits44 )
    @update
    def ostruct_s_DOT_ostream_LB_2_RB__DOT_msg():
      s.ostream[2].msg.payload @= s.s_DOT_ostream_LB_2_RB__DOT_msg[0:32]
      s.ostream[2].msg.opaque @= s.s_DOT_ostream_LB_2_RB__DOT_msg[32:40]
      s.ostream[2].msg.dest @= s.s_DOT_ostream_LB_2_RB__DOT_msg[40:42]
      s.ostream[2].msg.src @= s.s_DOT_ostream_LB_2_RB__DOT_msg[42:44]
    
    s.s_DOT_ostream_LB_3_RB__DOT_msg = Wire( Bits44 )
    @update
    def ostruct_s_DOT_ostream_LB_3_RB__DOT_msg():
      s.ostream[3].msg.payload @= s.s_DOT_ostream_LB_3_RB__DOT_msg[0:32]
      s.ostream[3].msg.opaque @= s.s_DOT_ostream_LB_3_RB__DOT_msg[32:40]
      s.ostream[3].msg.dest @= s.s_DOT_ostream_LB_3_RB__DOT_msg[40:42]
      s.ostream[3].msg.src @= s.s_DOT_ostream_LB_3_RB__DOT_msg[42:44]
    
    s.s_DOT_ostream_LB_0_RB__DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_ostream_LB_0_RB__DOT_val():
      s.ostream[0].val @= s.s_DOT_ostream_LB_0_RB__DOT_val
    
    s.s_DOT_ostream_LB_1_RB__DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_ostream_LB_1_RB__DOT_val():
      s.ostream[1].val @= s.s_DOT_ostream_LB_1_RB__DOT_val
    
    s.s_DOT_ostream_LB_2_RB__DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_ostream_LB_2_RB__DOT_val():
      s.ostream[2].val @= s.s_DOT_ostream_LB_2_RB__DOT_val
    
    s.s_DOT_ostream_LB_3_RB__DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_ostream_LB_3_RB__DOT_val():
      s.ostream[3].val @= s.s_DOT_ostream_LB_3_RB__DOT_val

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.istream_msg[0][0] = int(s.s_DOT_istream_LB_0_RB__DOT_msg)
      
      _ffi_m.istream_msg[1][0] = int(s.s_DOT_istream_LB_1_RB__DOT_msg)
      
      _ffi_m.istream_msg[2][0] = int(s.s_DOT_istream_LB_2_RB__DOT_msg)
      
      _ffi_m.istream_msg[3][0] = int(s.s_DOT_istream_LB_3_RB__DOT_msg)
      
      _ffi_m.istream_val[0][0] = int(s.s_DOT_istream_LB_0_RB__DOT_val)
      
      _ffi_m.istream_val[1][0] = int(s.s_DOT_istream_LB_1_RB__DOT_val)
      
      _ffi_m.istream_val[2][0] = int(s.s_DOT_istream_LB_2_RB__DOT_val)
      
      _ffi_m.istream_val[3][0] = int(s.s_DOT_istream_LB_3_RB__DOT_val)
      
      _ffi_m.ostream_rdy[0][0] = int(s.s_DOT_ostream_LB_0_RB__DOT_rdy)
      
      _ffi_m.ostream_rdy[1][0] = int(s.s_DOT_ostream_LB_1_RB__DOT_rdy)
      
      _ffi_m.ostream_rdy[2][0] = int(s.s_DOT_ostream_LB_2_RB__DOT_rdy)
      
      _ffi_m.ostream_rdy[3][0] = int(s.s_DOT_ostream_LB_3_RB__DOT_rdy)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_istream_LB_0_RB__DOT_rdy @= _ffi_m.istream_rdy[0][0]
      
      s.s_DOT_istream_LB_1_RB__DOT_rdy @= _ffi_m.istream_rdy[1][0]
      
      s.s_DOT_istream_LB_2_RB__DOT_rdy @= _ffi_m.istream_rdy[2][0]
      
      s.s_DOT_istream_LB_3_RB__DOT_rdy @= _ffi_m.istream_rdy[3][0]
      
      s.s_DOT_ostream_LB_0_RB__DOT_msg @= _ffi_m.ostream_msg[0][0]
      
      s.s_DOT_ostream_LB_1_RB__DOT_msg @= _ffi_m.ostream_msg[1][0]
      
      s.s_DOT_ostream_LB_2_RB__DOT_msg @= _ffi_m.ostream_msg[2][0]
      
      s.s_DOT_ostream_LB_3_RB__DOT_msg @= _ffi_m.ostream_msg[3][0]
      
      s.s_DOT_ostream_LB_0_RB__DOT_val @= _ffi_m.ostream_val[0][0]
      
      s.s_DOT_ostream_LB_1_RB__DOT_val @= _ffi_m.ostream_val[1][0]
      
      s.s_DOT_ostream_LB_2_RB__DOT_val @= _ffi_m.ostream_val[2][0]
      
      s.s_DOT_ostream_LB_3_RB__DOT_val @= _ffi_m.ostream_val[3][0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

      if s._ffi_inst.VNet__p_msg_nbits_44_has_assert_fired( _ffi_m ):
        raise AssertionError("A Verilog assertion fired in the Verilator simulation!")

  def assert_on( s, enable ):
    assert isinstance( enable, bool )
    s._ffi_inst.VNet__p_msg_nbits_44_assert_on( s._ffi_m, enable )

  def line_trace( s ):
    if 1:
      s._ffi_inst.VNet__p_msg_nbits_44_line_trace( s._ffi_m, s._ffi_m._cffi_line_trace_str )
      return s._convert_string( s._ffi_m._cffi_line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, reset={s.reset}, istream[0].msg={s.istream[0].msg}, istream[1].msg={s.istream[1].msg}, istream[2].msg={s.istream[2].msg}, istream[3].msg={s.istream[3].msg}, istream[0].rdy={s.istream[0].rdy}, istream[1].rdy={s.istream[1].rdy}, istream[2].rdy={s.istream[2].rdy}, istream[3].rdy={s.istream[3].rdy}, istream[0].val={s.istream[0].val}, istream[1].val={s.istream[1].val}, istream[2].val={s.istream[2].val}, istream[3].val={s.istream[3].val}, ostream[0].msg={s.ostream[0].msg}, ostream[1].msg={s.ostream[1].msg}, ostream[2].msg={s.ostream[2].msg}, ostream[3].msg={s.ostream[3].msg}, ostream[0].rdy={s.ostream[0].rdy}, ostream[1].rdy={s.ostream[1].rdy}, ostream[2].rdy={s.ostream[2].rdy}, ostream[3].rdy={s.ostream[3].rdy}, ostream[0].val={s.ostream[0].val}, ostream[1].val={s.ostream[1].val}, ostream[2].val={s.ostream[2].val}, ostream[3].val={s.ostream[3].val},'

  def internal_line_trace( s ):
    return ''
