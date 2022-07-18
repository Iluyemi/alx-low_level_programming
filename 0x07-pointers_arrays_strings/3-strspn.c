#include "main.h"
#include <string.h>
/**
 * _strspn - My prototype function
 * @s: Initial segment to be returned from
 * @accept: Constant bytes
 * Return: on Success
 */
unsigned int _strspn(char *s, char *accept)
{
int a;
a = strspn(s, accept);
return (a);
}

