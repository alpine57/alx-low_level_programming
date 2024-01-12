#include "lists.h"
/**
 * print_dlistint - prints elements of a doubly linked_list
 * @h: a node
 * Return:nodes counted
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
	printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
