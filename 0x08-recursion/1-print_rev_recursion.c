#include "main.h"
/**
 * main - check the code
 *_print_rev_recursion: printing reverse
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s+1);
_putchar(s);
return;
}
