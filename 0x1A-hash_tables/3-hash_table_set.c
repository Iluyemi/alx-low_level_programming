#include "hash_tables.h"

/**
 * hash_table_set - function
 * @ht: input a
 * @key: input b
 * @value: input c
 * Return: 1 if successfull
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *old, *Value_duplicate; 
	hash_node_t *new;
	if (key == NULL || key[0] == '\0')
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	Value_duplicate = strdup(value);
	for (new = ht->array[index]; new != NULL; new = new->next)
	{
		if (strcmp(new->key, key) == 0)
		{
			old = new->value;
			new->value = Value_duplicate;
			free(old);
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	new->key = strdup(key);
	if (new->key == NULL)
		return(0);
	new->value = Value_duplicate;
	if (new->value == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return(1);
}



