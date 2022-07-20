#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function
 * @s: input array
 * Return: Always 0.
 */
int n = 0;
int _strlen_recursion(char *s)
{
         if (*s != '\0')
	 {
	_strlen_recursion(s + 1);	
	n++;
	 }
	return (n);
}
