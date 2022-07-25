#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - My Prototype function
 * @str: prototype array
 * Return: NULL if size = 0
 */
char *_strdup(char *str)
{
char *ar;
int n = 0;
int i;
if (str == NULL)
{
	return (NULL);
}
while (str[n])
{
	n++;
}
ar = (char *)malloc(n * sizeof(char));
for (i = 0; i <= n; i++)
{
	ar[i] = str[i];
}
return (ar);
free(ar);
}

