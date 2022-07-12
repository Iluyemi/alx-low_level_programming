#include "main.h"
/**
 * swap_int - Swaps the value of an int
 * Return: if successful
 * @a: a pointer
 * @b: a pointer
 */
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
return;
}
