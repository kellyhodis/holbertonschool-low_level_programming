#include "lists.h"

/**
* add_dnode - add a new node at the beginning of a doubly linked list
* @head: head of the list
* @n: number to insert in the new node
*
* Return: address of new element or NULL
*/

dlistint_t *add_dnode(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}

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
		free(new);
		return (add_dnode(head, n));
	}

	while (traverse->next)
		traverse = traverse->next;

	traverse->next = new;
	new->n = n;
	new->prev = traverse;
	new->next = NULL;

	return (new);
}
