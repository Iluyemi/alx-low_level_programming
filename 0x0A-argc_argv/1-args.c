#include <stdio.h>
/**
* main - prints the number of arguments
*@argc: number of arguments
*@argv:array of arguments
*Return: the number of arguments
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	i = 1;
	argc -= i;
	printf("%d\n", argc);
	return (0);
}
