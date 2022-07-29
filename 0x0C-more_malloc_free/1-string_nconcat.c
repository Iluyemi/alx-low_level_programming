#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - prototype function
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: s if successful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, b, j, a;
	char *s;

	i = 0;
	b = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n > j)
		n = j;
	s = malloc(((i + n) * sizeof(char)) + 1);
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (a = 0; a <= (i + n); a++)
	{
	s[a] = s1[a];
	if (a >= i)
	{
	s[a] = s2[b];
	b++;
	}
	}
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
