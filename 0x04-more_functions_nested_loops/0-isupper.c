#include "main.h"
/**
 * _isupper - the protyped function
 * @c: input character
 * Return: 0 if not uppercase
 */
int _isupper(int c)
{
int c;

if (c >= 'A' || c <= 'Z')
{
_putchar('1');
}
else
{
_putchar('0');
}
return;
}
