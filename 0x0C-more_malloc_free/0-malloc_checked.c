#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - My prototype function
 * @b: input unsigned int
 * Return: pointer if successful and gives out 98 if not
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if ((malloc(b)) == NULL)
	{
		exit(98);
	}
	return (s);
}
