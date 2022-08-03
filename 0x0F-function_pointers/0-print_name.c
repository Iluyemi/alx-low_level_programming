#include "function_pointers.h"
/**
 * print_name - My prototype function
 * @name: first input
 * @f: input function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
