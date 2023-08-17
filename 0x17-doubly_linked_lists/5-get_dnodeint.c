#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node of doubly linked list.
 * @head: Pointer to head of  list.
 * @index: Index of  node.
 * Return: Address of node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
	if (count == index)
	return (current);
	count++;
	current = current->next;
	}

	return (NULL);
}

