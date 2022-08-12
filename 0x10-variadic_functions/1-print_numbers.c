#include <stdio.h>
#include <stdarg.h>
<<<<<<< HEAD
/**
 * print_numbers - funtion
 * @separator: comma for the printing 
 * @n: range of ellipsis
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
	printf("%i", va_arg(ap, int));
			if(separator != NULL && i != n - 1)
			{
			printf("%s ",separator);
			}
			printf("\n");
}
va_end(ap);
return;
=======
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
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
>>>>>>> 6736bd1336dcea136c90a379b7b647409b32c7a2
}
