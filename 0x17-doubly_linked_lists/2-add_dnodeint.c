#include "lists.h"
/**
 * add_dnodeint - add new node at  start of list
 * @head: a node pointer to the head 
 * @n: start of the list
 * Return: a node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	if (*head == NULL)
	{
		temp->prev = NULL;
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
}
