#include "main.h"
#include <stdio.h>
int prime(int n)
{
	if (n == 1)
	{
		return(1);
	}
	else if (n == 2)
	{
		return(2);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
	return(prime(n - 1));
	}
}
int main(void)
{
printf("%i", prime(10));
return(0);
}

