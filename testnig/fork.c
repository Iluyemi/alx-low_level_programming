#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

void forking()
{
	pid_t i;
	i = fork();
	if (i == 0)
		printf("Na pikin i be ohh %d \n", i);
	else
		printf("Where my pikin dey %d \n", i);
}
int main()
{
	forking();
	return (0);
}

