#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - print a copy of character
 * @a: first param
 * @n: second param
 * Return: void
 */
void reverse_array(int *a, int n)
{
int f;
f = n;
for (f = n; f <= n && f >= 0; f--)
{
printf("%d", a[f]);
if (f != 0)
{
printf(", ");
}
}
return;
}

