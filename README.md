protobuf for Unikraft
===================

This is the port of protobuf as a Unikraft external library.

## Build
Protobuf depends on the following libraries that need to be added to `Makefile` in this order:
* `pthreads`, e.g. `pthread-embedded`
* CXX standard library, e.g. `libunwind`, `compiler-rt`, `libcxxabi`, `libcxx`
* `libc`, e.g. `newlib`

## Usage
.proto files must be compiled before compiling this library, or if you would like the Unikraft build system to drive that process you add a target to UK\_PREPARE, e.g., 

$(LIBPROTOBUF_BUILD)/.configured:
	[commands to compile .proto files]
	
UK_PREPARE += $(LIBPROTOBUF_BUILD)/.configured

Please refer to the `README.md` as well as the documentation in the `doc/`
subdirectory of the main unikraft repository.
