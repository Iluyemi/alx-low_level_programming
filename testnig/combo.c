#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
int main()
{
	pid_t a, b, c , d, e;
	int status;
	char cmd [] = "/usr/bin/ls";
	char *v[] = {"ls", "-l", "/tmp", NULL};
	
	a = fork();
	printf("wah\n");
	if ( a == -1)
	{
		perror("Mogbe");
		return (1);
	}
	else if (a == 0)
	{
		printf("zo \n");
		execve(cmd, v, NULL);
		exit(1);
		printf("bia \n");
	}
	else
	{
		wait(&status);
		b = getppid();
		printf("Na me be the papa: %d \n", b);
		c = getpid();
		printf("Na me be ur papa younger brother: %d \n", b);
	}
}
