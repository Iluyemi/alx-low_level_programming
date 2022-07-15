#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - a function for concatenating two strings
 * @dest: character
 * @src: a characte
 * @n : byte
 * Return: if executed properly
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
a = strlen(dest);
int i;
for (i = 0; i < n; i++)
{
dest[a + i] = src[i];
}
return (dest);
}
