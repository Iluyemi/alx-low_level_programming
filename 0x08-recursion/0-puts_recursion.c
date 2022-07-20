#include "main.h"
/**
 * _puts_recursion - prototype function
 * @s: first character array
 * Return: if executed properly
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\0');
_putchar(\n);
}
return;
}
