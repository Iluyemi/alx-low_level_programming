#include "hash_tables.h"


void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int index = 0;
	int n = 1;

	printf("{");
	while (index < ht->size)
	{
		new = ht->array[index];
		while(new != NULL)
		{
			if (n)
				n = 0;
			else
			{
				if (new->next != NULL)
					printf(", ");
				printf("\'%s\': \'%s\'", new->key, new->value);
			}
                        new = new->next;
		}
		index++;
	}
	printf("}\n");
}
