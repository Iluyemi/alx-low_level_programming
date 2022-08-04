#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - my prototype function
 * @array: pointer to the array
 * @size: size of array
 * @cmp: pointer to a function that carries out the comparison
 * Return: -1 if size is less than 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]))
		{
		return (i);
		}
	}
	return (-1);
}
