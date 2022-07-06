#include "main.h"
/**
 * print_sign - prints sign
 * @r: a character argument
 *Returns: 1 if r is greater than zero
 *Returns: -1 is r is less than zero
 *Returns: 0 if r is zero
 */
int print_sign(int r)
{
if  (r > 0)
{
_putchar('+');
return (1);
}
else if (r < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
