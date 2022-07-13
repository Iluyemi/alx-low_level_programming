#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print reverse of a string
 * Return: if successful
 * @s: an array
 */
void puts2(char *str)
{
int len;
int i;
len = strlen(s);
for (i = 0; i >= len; i++)
{
if (i % 2 != 1)
printf("%c", str[i]);
}
printf("\n");
return;
}

