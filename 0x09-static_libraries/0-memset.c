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
<<<<<<< HEAD
s[i] =  b;
}
return (s);
=======
*(s + i) =  b;
}
return (s);
=======
char *i;
i = memset(s, b, n)
return (i);
>>>>>>> a1d3dd78aca2ff090b8330593d437a8dff98cb10
>>>>>>> 891d296f5bd106d6f392cb40ddeea1d6ca1957b2
}
