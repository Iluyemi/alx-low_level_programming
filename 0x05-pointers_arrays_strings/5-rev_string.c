#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - print reverse of a string
 * Return: if successful
 * @s: an array
 */
void rev_string(char *s)
{
int len;
int i;
int j:
len = strlen(s);
for (j = 0; j <= (len - 1); j++)
{
printf("%c", s[j]);
}
printf("\n");
for (i = len - 1; i >= 0 && i >= len; i--)
{
printf("%c", s[i]);
}
return;
}

