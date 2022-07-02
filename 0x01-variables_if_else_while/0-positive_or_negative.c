#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - The main function of my code
 * Return: 0 if code runs properly
 */
int main(void)
{
int n;
srand(time(0));
n = rand();
if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is Zero\n", n);
}
return (0);
}
