#include "main.h"
/**
 * _strstr - My prototype function
 * @haystack: Comparison A
 * @needle: Comparison B
 * Return: on Success
 */
char *_strstr(char *haystack, char *needle)
{
int a, b;
a = 0;
b = 0;
while (haystack[a])
{
	while (needle[b])
	{
		if (haystack[a + b] != needle[b])
		{
			break;
		}
		b++;
	}
	if (needle[b] == '\0')
	{
		return (haystack + a);
	}
	a++;
}
return (0);
}
