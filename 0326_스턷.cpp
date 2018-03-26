#include <stdlib.h>
#include <stdio.h>
#include <zconf.h>

int main()
{

	int pid;
	printf("1: pid %d \n", getpid());

	if ((pid = fork()) == 0)
		printf("2: ppid %d -> pid %d \n", getppid(), getpid());
	else printf("3: pid %d \n", getpid());

	if ((pid = fork()) == 0) {
		printf("4: ppid %d -> pid %d \n}", getppid(), getpid());

	}
	else {
		wait(NULL);
		printf("5: pid %d \n", getpid());
		
	};

	if ((pid = fork()) == 0)
		printf("6: ppid %d -> pid %d \n}", getppid(), getpid());

	else printf("7: pid %d \n", getpid());
}