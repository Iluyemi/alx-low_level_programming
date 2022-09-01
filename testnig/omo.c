#include <stdio.h>
#include <unistd.h>
int main ()
{
	char* line = NULL;
	size_t n = 0;

	while (1)
	{
		write(1, "($) ",5);
		getline(&line, &n, stdin);
		if (line == "ls")
		{
			printf("true");
			break;
		}
		else
		{
			printf("%s", line);
			printf("false");
			break;
		}
	}
}
	
