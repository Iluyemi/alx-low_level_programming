#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print reverse of a string 
 * Return: if successful
 * @s: an array
 */
void print_rev(char *s)
{
int len;
int i;
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
return;
}
