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
while (f > 0)
{
if (f != n)
{
printf(", ");
}
printf("%d", a[f]);
f--;
}
printf("\n");
return;
}
