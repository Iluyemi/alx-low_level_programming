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
int i;
for (i = n; i <= n && i >= 0; i--)
{
printf("%d", a[i]);
if (i != 0)
{
printf(", ");
}
}
return;
}

