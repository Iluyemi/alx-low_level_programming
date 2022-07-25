#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - My Prototype function
 * @s1: prototype array
 * @s2: prototype array
 * Return: NULL if size = 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ar;
	int n;

	while (s1[i] && s2[j])
	{
		i++;
		j++;
	}
	ar = malloc((i + j) * sizeof(char));
if (ar == NULL)
{
	return (NULL);
}
for (n = 0; n < (i + j); n++)
{
	while (n < i)
	{
		ar[n] = s1[n];
	}
	while (n > i)
	{
		ar[n] = s2[n];
	}
	return (ar);
}
