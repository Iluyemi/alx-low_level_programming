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
for (f = n - 1; f <= n; f--)
{
printf("%d", a[f]);	
}
return;
}
