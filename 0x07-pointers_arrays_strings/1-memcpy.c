#include "main.h"
/**
 * _memcpy - My prototype function
 * @n: Number of bytes
 * @src: memory area to be copied from
 * @dest: memory area to deliver
 * Return: dest if Successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
int i;
char *dest;
char *src;
unsigned int n;
=======
unsigned int i;
>>>>>>> a1d3dd78aca2ff090b8330593d437a8dff98cb10
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
