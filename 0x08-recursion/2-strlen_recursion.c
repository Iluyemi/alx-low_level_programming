#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * _strlen_recursion - function
=======
 * _strlen_recursion - check the code
>>>>>>> e7ded5d1bdd9dbef03d749469556cdfa686f6128
 * @s: input array
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
<<<<<<< HEAD
         if (*s != '\0')
	 {
	_strlen_recursion(s + 1);	
	n++;
	 }
	return (n);
=======
int n;
if (*s != '\0')
{
_strlen_recursion(s + 1);
n++;
}
return (n);
>>>>>>> e7ded5d1bdd9dbef03d749469556cdfa686f6128
}
