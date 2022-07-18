#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - My prototype function
 * @a: array
 * @size: size
 * Return: on Success
 */
void print_diagsums(int *a, int size)
{
int i, j, h, SUMA, SUMB;
for (i = 0; i < size; i++)
{
	for (j = 0;  j < size; j++)
	{
	while (i = j)
	{
	SUMA += a[i * j];
	}
	}
	for (h = 5; h >= 0; h--)
	{
	SUMB += a[i * h];
	}
}
printf("%d, %d\n", SUMA, SUMB);
}
