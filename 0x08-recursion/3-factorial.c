#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return(1);
	}
	else if (n < 0)
	{
		return(-1);
	}
	return(n * factorial(n - 1));
}
int main(void)
{
    printf("%d", factorial(-28));
    return (0);
}
