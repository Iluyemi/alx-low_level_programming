#include "main.h"
#include <string.h>
/**
 * _strpbrk - My prototype function
 * @accept: Constant byte
 * @s: memory area
 * Return: on Success
 */
char *_strpbrk(char *s, char *accept)
{
char *n;
n = strpbrk(s, accept);
return (n);
}
