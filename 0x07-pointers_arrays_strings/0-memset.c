#include "main.h"
#include <string.h>
/**
 * _memset - My prototype function
 * @n: Number of bytes
 * @b: Constant byte
 * @s: memory area
 * Return: on Success
 */
char *_memset(char *s, char b, unsigned int n)
{
char *C;
C = memset(s, b, n);
return (C);
}
