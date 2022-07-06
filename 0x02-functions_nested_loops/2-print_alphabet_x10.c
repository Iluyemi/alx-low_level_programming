#include "main.h"
/**
 * print_alphabet - print letters
 * Return: 0 return value if successful
 */
void print_alphabetx10(void)
{
char alpha;
int i;
for (i = 0; i <= 9; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
return;
}

