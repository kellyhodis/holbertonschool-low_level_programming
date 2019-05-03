#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a doubly linked list
* @head: head of list
* @n: number to place in element
*
* Return: address of the new element or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *traverse;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	traverse = *head;
	if (!traverse)
	{
		return (add_dnodeint(head, n));
	}

	while (traverse->next)
		traverse = traverse->next;

	traverse->next = new;
	new->n = n;
	new->prev = traverse;
	new->next = NULL;

	return (new);
}
