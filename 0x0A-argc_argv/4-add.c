#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int i, add;
	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i] <= a || argv[i] >= z)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	return (0);
}
