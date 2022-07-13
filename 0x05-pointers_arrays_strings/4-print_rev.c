#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reset_to_98 - Updates the value of an int
 * Return: if successful
 * @n: a pointer
 */
void print_rev(char *s)
{
int len;
int i;
len = strlen(s);
for (i = len; i <= len && i >= 0; i--)
if((s[i] = '\0'))
{
break;
}
else
{
printf("%c", s[i]);
}
printf("\n");
return;
}
