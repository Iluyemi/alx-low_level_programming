#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - listing
 * @h: input 
 * Return: no of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

		while(h)
		{
			i++;
			h = h->next;
		}
	return (i);
}
