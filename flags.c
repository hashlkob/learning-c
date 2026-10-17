#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int verbose = 0;
    for (int n = 1; n < argc; n++) {
	if (strcmp(argv[n], "-v") == 0)
	verbose = 1;
    }
    
    if (verbose == 1) {
	fprintf(stdout, "verbose is on\n");
    }	

    return 0;
}
