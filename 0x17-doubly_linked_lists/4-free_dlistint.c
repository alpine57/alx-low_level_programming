#include "lists.h"
/**
 * free_dlistint - frees  doubly linked list
 * @head: points beginning of the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *next;

	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
