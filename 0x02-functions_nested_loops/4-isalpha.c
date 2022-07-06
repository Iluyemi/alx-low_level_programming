#include "main.h"
/**
 * _isalpha - print uppercase and lowercase alphabet
 * @c : a character argument
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
return (c >= 'a' || c >= 'A' && c <= 'z' || c <= 'Z');
}
