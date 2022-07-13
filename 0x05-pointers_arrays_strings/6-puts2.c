#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print reverse of a string
 * Return: if successful
 * @s: an array
 */
void print_rev(char *str)
{
int len;
int i;
len = strlen(str);
for (i = len - 1; i >= 0; i--)
{
printf("%c", str[i]);
}
printf("\n");
return;
}

