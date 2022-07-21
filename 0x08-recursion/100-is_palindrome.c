#include "main.h"
#include <string.h>
/**
 * is_palindrome - prototype function
 * @s: input array
 * Return: value if succeessful
 */
int  is_palindrome(char *s)
{
int i;
int n;
int j = 0;
char *r;
if (*s != '\0')
{
	is_palindrome(s + 1);
	r[j] = s[n];
}
if (s[0] == r[0] && s[1] == r[1])
{
	return (1);
}
else
{
	return (0);
}
}

