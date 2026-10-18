#include <stdio.h>
#include <string.h>

int main(void) {
    const char *info = "name = oksh";
    const char *ri = strchr(info, '=');
    const char *val = ri + 1;
    while (*val == ' ')
	val++;
    fprintf(stdout,"the name is %s\n", val);
    if (ri == NULL) {
	fprintf(stderr,"no = in info\n");
	return 1;
    }
    return 0;
}
