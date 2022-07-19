#include "main.h"
/**
 * _strspn - My prototype function
 * @s: Initial segment to be returned from
 * @accept: Constant bytes
 * Return: on Success
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, t;
a = 0;
t = 0;
while (accept[a])
{
b = 0;
while (s[b] != 32)
{
if (accept[a] == s[b])
{
t++;
}
b++;
}
a++;
}
return (t);
}

