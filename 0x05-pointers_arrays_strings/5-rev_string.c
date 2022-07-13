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
len = strlen(s);
for (i = len; i >= 0; i--)
{
printf("%c", s[i]);
}
return;
}

