#=========================================================================
# Modular C++ Build System Subproject Makefile Fragment
#=========================================================================
# Please read the documenation in 'mcppbs-uguide.txt' for more details
# on how the Modular C++ Build System works.

mtbmark_intdeps  = ubmark ece4750 
mtbmark_cppflags = -I../mtbmark -I../ubmark -I../ece4750 
mtbmark_ldflags  = 
mtbmark_libs     = -lmtbmark -lubmark -lece4750 

mtbmark_hdrs = \
  mtbmark-vvadd.h \
  mtbmark-cmult.h \
  mtbmark-mfilt.h \
  mtbmark-bsearch.h \
  mtbmark-sort.h \

mtbmark_srcs = \
  mtbmark-vvadd.c \
  mtbmark-cmult.c \
  mtbmark-mfilt.c \
  mtbmark-bsearch.c \
  mtbmark-sort.c \

mtbmark_test_srcs = \
  mtbmark-vvadd-test.c \
  mtbmark-cmult-test.c \
  mtbmark-mfilt-test.c \
  mtbmark-bsearch-test.c \
  mtbmark-sort-helper-test.c \
  mtbmark-sort-test.c \

mtbmark_prog_srcs = \
  mtbmark-vvadd-eval.c \
  mtbmark-cmult-eval.c \
  mtbmark-mfilt-eval.c \
  mtbmark-bsearch-eval.c \
  mtbmark-sort-eval.c \
