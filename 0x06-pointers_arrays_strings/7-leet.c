#include "main.h"
/**
 * leet - print encoded value
 * @w: a character
 * Return: if executed properly
 */
char *leet(char *w)
{
int x = 0;
int l = 5;
int b;
char bt[5] = {'A', 'E', 'O', 'T', 'L'};
char bts[5] = {'4', '3', '0', '7', '1'};
while (w[x])
{
b = 0;
while (b < l)
{
if (w[x] == bt[b] || w[x] - 32 == bt[b])
{
w[x] = bts[b];
b++;
}
}
x++;
}
return (w);
}
