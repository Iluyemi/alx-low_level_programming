#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - print half of a string
 * Return: if successful
 * @s: an array
 */
void puts_half(char *str)
{
int len;
int i;
int j;
int n;
len = strlen(str);
j = len / 2;
for (j = len / 2; j <= len; i++)
{
if (len % 2 = 1)
{
n = (len - 1) / 2;
printf("%c", str[n]);
}
printf("%c", str[j];
}
printf("\n");
return;
}
