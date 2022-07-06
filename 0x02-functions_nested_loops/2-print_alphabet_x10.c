#include "main.h"
/**
 * print_alphabet - print letters
 */
void print_alphabet_x10(void)
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

