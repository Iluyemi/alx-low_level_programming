#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *hi;
	hash_node_t *new;

	index = key_index((unsigned char *)key, ht->size);
	hi = NULL;
	for(new = ht->array[index]; new != NULL; new = new->next)
	{
		if (strcmp(new->key, key) == 0)
		{
			return (new->value);
		}
	}
	return (hi);
}
