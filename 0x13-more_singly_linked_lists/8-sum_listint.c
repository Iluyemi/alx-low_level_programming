#include "lists.h"
/**
 * sum_listint - function
 * @head: input
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
