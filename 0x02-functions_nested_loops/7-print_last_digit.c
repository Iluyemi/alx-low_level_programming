#include "main.h"
/**
 * print_last_digit - printing the last digit
 * @n: a character
 * Return: 0 if exectuted
 */
int print_last_digit(int n)
{
int r;
if (n < 0);
{
n = -n;
r = n % 10;
}
else
{
r = n % 10;
}
_putchar(r + '0');
return (r);
}
