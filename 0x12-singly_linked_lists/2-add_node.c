#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds a node to a linked list head
 * @head: linked list head
 * @str: string element of the linked list
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int n;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;
	}
	return (*head);
	
}
