#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - My prototype function
 * @name: first input
 * @f: input function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
