#!/bin/bash
# Compiles all .c files in the current directory
# into a new shared library
#
# First argument must provide the library's name
#
# Be sure to update LD_LIBRARY_PATH to include it

if [[ -z "$1" ]]; then
	echo "usage: make-lib.sh <name>"
	exit
fi

gcc -fPIC -g -c -Wall *.c
gcc -shared -Wl,-soname,lib$1.so -o lib$1.so *.o -lc
