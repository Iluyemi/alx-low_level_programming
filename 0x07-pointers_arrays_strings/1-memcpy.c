#include "main.h"
#include <string.h>
/**
 * _memcpy - My prototype function
 * @n: Number of bytes
 * @src: memory area to be copied from
 * @dest: memory area to deliver
 * Return: dest if Successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
