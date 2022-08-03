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
	if (size <= 0)
	{
		return (-1);
	}




