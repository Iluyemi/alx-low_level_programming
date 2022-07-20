#include "main.h"
#include <stdio.h>
/**
 * factorial - prototype function for factorial function
 * @n: input integer:
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
