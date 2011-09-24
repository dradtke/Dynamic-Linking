/*
 * Use 'make-lib.sh' to turn this file into a library
 * named test. Don't forget to update LD_LIBRARY_PATH
 * to include this directory by running
 *
 * $ export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:`pwd`
 */

#include <stdio.h>

void print_msg() {
	printf("holy shit!\n");
}
