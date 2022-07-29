#include "main.h"
#include <stdlib.h>
/**
 * _calloc - prototype function
 * @nmemb: number for elements for the array
 * @size: byte size
 * Return: s if successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array != NULL)
	{
	for (i = 0; i < nmemb; i++)
	{
	array[i] = 0;
	}
	return (array);
	}
	else
		return (NULL);
}
