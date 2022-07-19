#include "main.h"
/**
 * _puts_recursion - prototype function
 * @s: first character array
 * Return: if executed properly
 */
void _puts_recursion(char *s)
{
int i = 0;
int n = 0;
while (s[i])
{
i++;
}
while (n < i)
{
_putchar(s[n]);
n++;
}
}
