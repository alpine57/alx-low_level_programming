#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert  new node at  given position.
 * @h: Pointer the head of the list.
 * @idx: list where  new node should be inserted.
 * @n: Value store in the new node.
 * Return: Address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	if (idx == 0)
	return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
	if (temp == NULL)
	return (NULL);
	temp = temp->next;
	}

	if (temp == NULL)
	return (NULL);

	if (temp->next == NULL)
	return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

