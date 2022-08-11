#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - printing list
 * @h: node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i;
const list_t *head = h;
while (head != NULL)
{
	if ((*head).str != NULL)
	{
		printf("[%d] %s\n", (*head).len, (*head).str);
	}
	else
	{
		printf("[%d] (nil)\n", (*head).len);
	}
	head = (*head).next;
	i++;
}
	return (i);
}
