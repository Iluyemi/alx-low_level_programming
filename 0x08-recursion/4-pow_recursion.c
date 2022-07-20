#include "main.h"
#include <stdio.h>

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
int main(void)
{
	printf ("%d", _pow_recursion(-5, 3));
	return (0);
}

