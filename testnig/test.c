#include <stdio.h>
#include <unistd.h>

int main(void)
{

	pid_t i;
	pid_t j;
	char **v = {"bin/ls", "-l", "/usr/", NULL};
	j = fork();
	  if (j == -1)
        {
                perror("Mogbe");
                return(1);
        }
	   i = getpid();

	printf("before execution\n");
	if (execve(v[0], v, NULL) == -1)
	{
		perror("Mogbe");
	}
	printf("sfter\n");
	return(0);

	printf("Before fork\n");
	return (0);

}

int main()
{
	while(1)
	{
		
