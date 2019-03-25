# ffimatrix

SWI-Prolog pack f or matrix operations. 
Now being rewritten to use the new FFI library for SWI-Prolog.
Work in progress, do not use for now.

## Installation on Ubuntu

Install the packages `libffi-dev` and `libatlas-base-dev'
```
sudo apt-get install libffi-dev libatlas-base-dev
```
Copy `prolog/ffimatrix.ubuntu.pl` to `prolog/ffimatrix.pl`
and compile
```
cp Makefile.macAcc Makefile
cp prolog/ffimatrix.mac.pl prolog/ffimatrix.pl
source buildenv.sh
make
```
## Installation on Mac

### Using the framework Accelerate

Apple macOS 10.3+ SDK includes BLAS in framework Accelerate.

Copy `Makefile.macAcc` to `Makefile` and `prolog/ffimatrix.mac.pl` to `prolog/ffimatrix.pl`
and compile
```
cp Makefile.macAcc Makefile
cp prolog/ffimatrix.mac.pl prolog/ffimatrix.pl
source buildenv.sh
make
```

### Using OpenBlas

Install the `openblas` Homebrew formula:

```
brew install openblas
````

Copy `Makefile.macOB` to `Makefile` and `prolog/ffimatrix.mac.pl` to `prolog/ffimatrix.pl`
and compile
```
cp Makefile.mac Makefile
cp prolog/ffimatrix.mac.pl prolog/ffimatrix.pl
source buildenv.sh
make
```