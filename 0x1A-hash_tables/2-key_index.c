#include "hash_tables.h"

/**
 * key_index - function 
 * @key: input 1
 * @size: input 2
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	index = hash_djb2(key) % size;
	return (index);
}
