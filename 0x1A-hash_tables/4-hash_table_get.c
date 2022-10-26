#include "hash_tables.h"
/**
 * hash_table_get - function name
 * @ht: input A
 * @key: input B
 * Return: string return
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *hi;
	hash_node_t *new;


	if (key == NULL)
		return NULL;
	index = key_index((unsigned char *)key, ht->size);
	hi = NULL;
	for (new = ht->array[index]; new != NULL; new = new->next)
	{
		if (strcmp(new->key, key) == 0)
		{
			hi = new->value;
			return (hi);
		}
	}
	return (hi);
}
