/*
 * This method makes regular calls to the print_msg()
 * method found in the library named test.
 *
 * Re-compiling the library while this program is
 * running should result in an immediate response.
 *
 * You should build this executable with this command:
 *
 *    $ gcc -o main main.c -ldl
 */

#include "../../src/loader.c"
#include <unistd.h>

int main(int argc, char *argv[]) {
	do {
		invoke_method("test", "print_msg");
	} while (!sleep(1));

	return 0;
}
