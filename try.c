#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t cpid = fork();
    if (cpid == 0) {
	fprintf(stdout,"child: im the child with pid %d\n", getpid());
	execlp("ls", "ls", NULL);
    } else {
	fprintf(stdout, "parent: my child is %d\n", cpid);
	waitpid(cpid, NULL, 0);
    }
    return 0;
}
