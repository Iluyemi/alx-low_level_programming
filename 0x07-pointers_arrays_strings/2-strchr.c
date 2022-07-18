#include "main.h"
#include <string.h>
/**
 * _strchr - My prototype function
 * @c: char to be located
 * @s: array of char
 * Return: on Success
 */
char *_strchr(char *s, char c)
{
char *c;
c = strchr(s, c);
return (c);
}

