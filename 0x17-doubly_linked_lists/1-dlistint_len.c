#include "lists.h"

/**
 * dlistint_len - Return no of elements in  doubly linked list.
 * @h: Pointer to head list.
 * Return: Number  elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
