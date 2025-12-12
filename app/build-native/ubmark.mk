#=========================================================================
# Modular C++ Build System Subproject Makefile Fragment
#=========================================================================
# Please read the documenation in 'mcppbs-uguide.txt' for more details
# on how the Modular C++ Build System works.

ubmark_intdeps  = ece4750 
ubmark_cppflags = -I../ubmark -I../ece4750 
ubmark_ldflags  = 
ubmark_libs     = -lubmark -lece4750 

ubmark_hdrs = \
  ubmark-vvadd.h \
  ubmark-cmult.h \
  ubmark-mfilt.h \
  ubmark-bsearch.h \
  ubmark-sort.h \

ubmark_srcs = \
  ubmark-vvadd.c \
  ubmark-cmult.c \
  ubmark-mfilt.c \
  ubmark-bsearch.c \
  ubmark-sort.c \

ubmark_test_srcs = \
  ubmark-vvadd-test.c \
  ubmark-cmult-test.c \
  ubmark-mfilt-test.c \
  ubmark-bsearch-test.c \
  ubmark-sort-helper-test.c \
  ubmark-sort-test.c \

ubmark_prog_srcs = \
  ubmark-vvadd-eval.c \
  ubmark-cmult-eval.c \
  ubmark-mfilt-eval.c \
  ubmark-bsearch-eval.c \
  ubmark-sort-eval.c \
