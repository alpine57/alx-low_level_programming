#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns  sum of all  data values.
 * @head: Pointer to head of the list.
 * Return: Sum of all  data values.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
}

