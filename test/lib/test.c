/*
 * This library exposes just one method, print_msg(),
 * which will print something to stdout.
 *
 * You can test the dynamic linking by changing the printed
 * string and re-compiling this library while the executable
 * runs in a separate window.
 *
 * Build this file into a shared library named 'test'
 * and then update LD_LIBRARY_PATH to include this directory
 * so that the executable can find it (updating the path
 * will only need to be done once):
 *
 *    $ ../../tools/make-lib.sh test
 *    $ export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:`pwd`
 */

#include <stdio.h>

void print_msg() {
	printf("holy shit!\n");
}
