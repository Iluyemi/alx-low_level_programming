#include "main.h"
/**
 * is_prime_number - check the code
 * @n: input int
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n == 1 || n == 2 || n == 3)
{
return (1);
}
	else if (n % 2 != 0 || n % 3 != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

