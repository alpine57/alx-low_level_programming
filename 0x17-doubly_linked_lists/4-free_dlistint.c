#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list
 * @head: Pointer to  head of  list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}

