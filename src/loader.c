/*
 * This file demonstrates how to dynamically call methods from external libraries
 */

#include <dlfcn.h>
#include <stdio.h>
#include <string.h>

/*
 * Invokes an external method with no arguments
 * Make sure LD_LIBRARY_PATH includes their locations
 */
void invoke_method(char *libname, char *method) {
	// TODO: how to do this with flexible arguments?
	void *dl_handle;
	char *error;
	float (*func)();

	char lib[strlen(libname)+6];
	sprintf(lib, "lib%s.so", libname);

	// Open the library
	if (!(dl_handle = dlopen(lib, RTLD_LAZY))) {
		fprintf(stderr, "%s\n", dlerror());
		return;
	}

	// Resolve the method
	func = dlsym(dl_handle, method);
	if ((error = dlerror()) != NULL) {
		fprintf(stderr, "%s\n", error);
		return;
	}

	// Call the method
	(*func)();

	// Close the library
	dlclose(dl_handle);
}
