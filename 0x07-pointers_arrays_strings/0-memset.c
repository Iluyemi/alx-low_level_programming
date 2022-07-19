#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: first character
 * @b: second character
 * @n: third character
 * Return: if executed properly
 */
char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) =  b;
}
return (s);
=======
char *i;
i = memset(s, b, n)
return (i);
>>>>>>> a1d3dd78aca2ff090b8330593d437a8dff98cb10
}
