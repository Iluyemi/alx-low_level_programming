#include "lists.h"
/**
 * add_nodeint - add node function
 * @head: input head
 * @n: head value
 * Return: the data type
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
