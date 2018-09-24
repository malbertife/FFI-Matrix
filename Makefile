LIBDIR=lib/$(SWIARCH)/

all: matrixNative.$(SOEXT) doc

matrixNative.$(SOEXT): matrixNative.c matrixNative.h
	gcc -O2 -shared -o matrixNative.$(SOEXT) matrixNative.c

doc: prolog/ffimatrix.pl
	swipl prolog/doc.pl

check:
	@echo "no check"

install: all
	mkdir -p $(LIBDIR)
	cp matrixNative.$(SOEXT) $(LIBDIR)

