# ffimatrix

SWI-Prolog pack for matrix operations. 
Now being rewritten to use the new FFI library for SWI-Prolog.
Work in progress, do not use for now.

## Installatio on Mac

Install the opneblas Homebrew formula:

```
brew install openblas
````

Copy `Makefile.mac` on `Makefile` and `prolog/ffimatrix.mac.pl` to `prolog/ffimatrix.pl``
and compile
```
cp Makefile.mac Makefile
cp prolog/ffimatrix.mac.pl prolog/ffimatrix.pl
source buildenv.sh
make
```