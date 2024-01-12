#include "lists.h"
/**
 *dlistint_len - prints the total no of nodes
 *@h: node
 *Return: no ofnodes 
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
