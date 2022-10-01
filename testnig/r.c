#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main()
{
	char *line = NULL;
	size_t n = 0;
	int i;
	while (1)
	{
		write(1, "($)", 5);
		getline(&line, &n, stdin);
		i = strlen(line);
		write(1, line, i);
	}
}
