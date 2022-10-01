#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *line = NULL;
	size_t n = 0;
	while(1)
	{
	getline(&line, &n, stdin);
	printf("%s\n", line);
	}
}
