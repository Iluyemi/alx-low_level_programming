#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function for printing number
 * @separator: input for the variadic function
 * @n: number of unknown arguments
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
