#include "function_pointers.h"
/**
 * array_iterator - my function prototype
 * @array: name of arrays
 * @size: size of array
 * @action: input function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array != NULL && action != NULL && size < 0)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
