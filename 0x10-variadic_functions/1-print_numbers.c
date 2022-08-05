#include <stdio.h>
#include <stdarg.h>
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
}
