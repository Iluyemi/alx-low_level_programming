#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - a function
 * @dest: character
 * @src: a character
 * Return: if executed properly
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
int c;
a = strlen(dest);
b = strlen(src);
for (c = 0; c < b; c++)
{
dest[a + c] = src[c];
}
return (dest);
}
