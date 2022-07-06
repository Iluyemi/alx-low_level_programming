#include "main.h"
/**
 * print_alphabet - print letters
 * Return: 0 return value if successful
 */
void print_alphabetx10(void)
{
int t;
int i;
for (i = 0; i <= 9; i++)
{
for (t = 'a'; t <= 'z'; t++)
{
_putchar(t);
}
_putchar('\n');
}
}

