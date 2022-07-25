#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - My Prototype function
 * @size: size of array
 * @c: input to array
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

if (size == 0)
{
	return (NULL);
}
ar = malloc(size * sizeof(char));
if (ar == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	ar[i] = c;
}
return (ar);
}
