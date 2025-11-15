#=========================================================================
# sll
#=========================================================================

import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from lab2_proc.test.inst_utils import *

#-------------------------------------------------------------------------
# gen_basic_test
#-------------------------------------------------------------------------

def gen_basic_test():
  return """
    csrr x1, mngr2proc < 0x80008000
    csrr x2, mngr2proc < 0x00000003
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    sll x3, x1, x2
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x3 > 0x00040000
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
  """

#-------------------------------------------------------------------------
# gen_x0_test
#-------------------------------------------------------------------------

def gen_x0_test():
  return [
    # dest = x0: remains 0
    """
    csrr x1, mngr2proc < 0xffffffff
    csrr x2, mngr2proc < 7
    sll  x0, x1, x2
    csrw proc2mngr, x0 > 0
    """,
    # src0 = x0: 0 << n = 0
    """
    csrr x2, mngr2proc < 13
    sll  x3, x0, x2
    csrw proc2mngr, x3 > 0
    """,
    # src1 = x0: shift by 0
    """
    csrr x1, mngr2proc < 0x89abcdef
    sll  x4, x1, x0
    csrw proc2mngr, x4 > 0x89abcdef
    """,
  ]


