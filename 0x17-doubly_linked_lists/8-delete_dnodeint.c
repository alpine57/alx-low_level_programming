#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete  node at a given index
 * @head: Pointer to pointer to head of  list
 * @index: Index of  node be deleted
 * Return: 1 if it success.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = current->next;
	if (current->next != NULL)
	current->next->prev = NULL;
	free(current);
	return (1);
	}

	while (index > 0)
	{
	if (current == NULL)
		return (-1);
	current = current->next;
	index--;
	}

	if (current == NULL)
	return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
	current->next->prev = current->prev;

	free(current);
	return (1);
}
