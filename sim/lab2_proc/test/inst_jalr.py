#=========================================================================
# jalr
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

    # Use r3 to track the control flow pattern
    addi  x3, x0, 0           # 0x0200
                              #
    lui x1,      %hi[label_a] # 0x0204
    addi x1, x1, %lo[label_a] # 0x0208
                              #
    nop                       # 0x020c
    nop                       # 0x0210
    nop                       # 0x0214
    nop                       # 0x0218
    nop                       # 0x021c
    nop                       # 0x0220
    nop                       # 0x0224
    nop                       # 0x0228
                              #
    jalr  x31, x1, 0          # 0x022c
    addi  x3, x3, 0b01        # 0x0230

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

  label_a:
    addi  x3, x3, 0b10

    # Check the link address
    csrw  proc2mngr, x31 > 0x0230

    # Only the second bit should be set if jump was taken
    csrw  proc2mngr, x3  > 0b10

  """

def gen_value_test():
  return """
    # Simple jalr value test
    # jalr at 0x204 -> link = 0x208
    csrr x1, mngr2proc < 0x00000220
    jalr x2, x1, 0
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x2 > 0x00000208
  """

def gen_immediate_test():
  return """
    # Test jalr with immediate offset
    # Address: 0x200
    addi x1, x0, 0x210    # Base address = 0x210
    # Address: 0x204
    jalr x2, x1, 8        # Jump to base + 8 = 0x218
    
    # This should be skipped (0x208)
    addi x3, x0, 0xbad
    
    nop
    nop
    nop
    
  target:  # Address: 0x218
    # Verify return address (0x204 + 4 = 0x208)
    csrw proc2mngr, x2 > 0x00000208
    # Verify skipped instruction
    csrw proc2mngr, x3 > 0
  """

def gen_reg_test():
  return """
    # Test jalr with computed address
    # Address: 0x200
    addi x1, x0, 0x200
    # Address: 0x204
    addi x1, x1, 0x20     # x1 = 0x220
    # Address: 0x208
    jalr x2, x1, 0        # Jump to 0x220
    
    # This should be skipped (0x20c)
    addi x3, x0, 0xbad
    nop
    nop
    nop
    nop
    
  target:  # Address: 0x220
    # Verify return address (0x208 + 4 = 0x20c)
    csrw proc2mngr, x2 > 0x0000020c
    # Verify skipped instruction
    csrw proc2mngr, x3 > 0
  """


def gen_negative_offset_test():
  return """
    # Test jalr with negative immediate offset
    addi x1, x0, 0x228       # 0x0200: Base address = 0x228
    jalr x2, x1, -0x10       # 0x0204: Jump to 0x218 (0x228 - 0x10)
    
    # This should be skipped
    addi x3, x0, 0xbad       # 0x0208: SKIPPED
    nop                       # 0x020c
    nop                       # 0x0210
    nop                       # 0x0214
    
  target:                     # 0x0218
    # Verify return address (0x0204 + 4 = 0x0208)
    csrw proc2mngr, x2 > 0x00000208
    
    nop                       # 0x021c
    nop                       # 0x0220
    nop                       # 0x0224
    nop                       # 0x0228
  """

def gen_dest_dep_test():
  return """
    # Simple jalr destination dependency test
    # jalr at 0x204 -> link = 0x208
    csrr x1, mngr2proc < 0x00000220
    jalr x2, x1, 0
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x2 > 0x00000208
  """


def gen_srcs_dest_test():
  return """
    # Simple jalr src == dest test
    # jalr at 0x204 -> link = 0x208
    csrr x1, mngr2proc < 0x00000220
    jalr x1, x1, 0
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    csrw proc2mngr, x1 > 0x00000208
  """

def gen_random_test(n=8):
  random.seed(0xdeadbeef)
  # Choose distinct small increments for each target
  incs = [ (i+1) for i in range(n) ]
  order = list(range(n))
  random.shuffle(order)

  asm = []
  asm.append("  addi  x7, x0, 0            # accumulator\n")

  # Emit call-sites in random order
  for i in order:
    # Build base for label_i, then choose an offset so base+off = label_i
    # We randomize whether we put part of the displacement into base or off.
    use_pos = random.choice([True, False])
    pad_nops = random.randint(0,2)
    asm.append(f"  # --- call target_{i} ---\n")
    asm.append(f"  lui   x1, %hi[target_{i}]\n")
    asm.append(f"  addi  x1, x1, %lo[target_{i}]\n")
    if use_pos:
      # Move base a little backward, jump forward with +offset (multiple of 2)
      delta = 2 * random.randint(0,3)
      if delta:
        asm.append(f"  addi  x1, x1, -{delta}\n")
        asm.append(f"  jalr  x31, x1, {delta}\n")
      else:
        asm.append(  "  jalr  x31, x1, 0\n")
    else:
      # Move base forward and jump back with negative offset
      delta = 2 * random.randint(1,3)
      asm.append(f"  addi  x1, x1, {delta}\n")
      asm.append(f"  jalr  x31, x1, -{delta}\n")
    for _ in range(pad_nops):
      asm.append("  nop\n")

  asm.append("\n  # After all calls, verify the sum in x7\n")
  asm.append(f"  csrw  proc2mngr, x7 > {sum(incs)}\n\n")

  # Emit targets: each adds its increment and returns to x31
  for i,val in enumerate(incs):
    asm.append(f"target_{i}:\n")
    asm.append(f"  addi  x7, x7, {val}\n")
    asm.append(  "  jalr  x0, x31, 0       # return\n")
    asm.append("\n")

  return "".join(asm)
