#include "main.h"
#include <string.h>
/**
 * _strstr - My prototype function
 * @haystack: Comparison A
 * @needle: Comparison B
 * Return: on Success
 */
char *_strstr(char *haystack, char *needle)
{
char *n;
n = strstr(haystack, needle);
return (n);
}
