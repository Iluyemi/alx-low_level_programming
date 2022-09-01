#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void handler(int sig)
{
	printf("na wetin i collect be this ohh: %d \n", sig);
	exit(EXIT_SUCCESS);
}
int main()
{
	signal(SIGINT, handler);
	while (1);
	return 0;
}
