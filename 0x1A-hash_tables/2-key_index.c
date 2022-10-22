#include "hash_tables.h"

/**
 * key_index - function 
 * @key: input 1
 * @size: input 2
 * Return : index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int sum = 0, index;
	int n = 0;

	while(key[n] != '\0')
	{
		sum += (unsigned long int)key[n];
		n++;
	}
	printf("%li\n", sum);
	index = sum % size;
	return (index);
}
