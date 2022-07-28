#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the number of arguments
*@argc: number of arguments
*@argv:array of arguments
*Return: the number of arguments
*/
int main(int argc, char *argv[])
{
	int i, j, a;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	a = i * j;

	printf("%d\n", a);
	return (0);
}
