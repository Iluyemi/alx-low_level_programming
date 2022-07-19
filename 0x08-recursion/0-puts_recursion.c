#include "main.h"
/**
 * _puts_recursion - prototype function
 * @s: first character array
 * Return: if executed properly
 */
void _puts_recursion(char *s)
{
	int n = 0;
	if (s[n] = '\0')
	{
		return;
	}
_putchar(s[n]);
n--;
_puts_recursion(char *s);
}
