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
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ar[i] = 'H';
	}
	return (ar);
}
