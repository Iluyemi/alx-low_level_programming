#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <signal.h>

void Handle(int sig)
{
	if (sig == SIGINT)
		write(1, "($) ", 5);
}

int main (int __attribute__((__unused__)) ac, char **av)
{
	signal(SIGINT, Handle);

	while(1)
	{
		write(1, "($) ", 5);
	}

	return (0);
}
