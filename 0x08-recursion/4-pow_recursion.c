#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Prototyped function
 * @x: input integer
 * @y: power
 * Return: if successful
 */
int _pow_recursion(int x, int y)
{
int n;
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	n = x * _pow_recursion(x, (y - 1));
	return (n);
}


