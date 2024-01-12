#include "lists.h"
/**
 * get_dnodeint_at_index - get node at specific index
 * @head: node list
 * @index: position of  node
 * Return: list of node 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;

	temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}

	return (temp);
}
