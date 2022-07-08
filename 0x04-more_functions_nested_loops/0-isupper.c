#include "main.h"
/**
 * _isupper - the protyped function
 * @c: input character
 * Return: 0 if not uppercase
 */
int _isupper(int c)
{
int c;
int i;
int j;
i = 1;
j = 0;

if (c >= 'A' || c <= 'Z')
{
_putchar(i + '0');
}
else
{
_putchar(j + '0');
}
return;
}
