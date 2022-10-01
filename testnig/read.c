#include <stdio.h> 
#include <unistd.h>
#include <string.h>
/** main - execve example
 *
 * Return: Always 0.
 */
int process(char *line) 
{ 
	int i;
	char av[] = "/usr/bin/ls";
	char *a[] = {"ls", "-l", NULL};
	char *K = "ls";
	int j = strcmp(line, K);
	printf("%i", j);
}

int main(void)
{
	size_t n = 0;
	char *line = NULL;
	char av[] = "/usr/bin/ls";
	char *a[] = {"ls", NULL};
	while (1)
	{
		write(1, "($) ",5);
		getline(&line, &n, stdin);
		process(line);
	}
	return(0);
}
