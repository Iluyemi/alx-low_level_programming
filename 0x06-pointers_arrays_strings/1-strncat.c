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
int l1;
l1 = strlen(dest);
int i;
for (i = 0; i < n && src[i] != 0; i++)
{
dest[l1 + i] = src[i];
}
return (dest);
}
