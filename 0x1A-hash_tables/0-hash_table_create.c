#include "hash_tables.h"
/**
 * hash_table_create - My prototpe function
 * @size: input size of hash to create
 * Return: the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **link;
	hash_table_t *new;

	link = malloc(size * sizeof(hash_node_t *));
	if (link == NULL && size == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(hash_table_t));
	new->size = size;
	new->array = link;
	return (new);
}

