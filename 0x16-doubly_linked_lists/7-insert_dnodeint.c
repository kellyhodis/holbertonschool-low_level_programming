#include "lists.h"

/**
* add_dnode_ - add a new node at the beginning of a doubly linked list
* @head: head of the list
* @n: number to insert in the new node
*
* Return: address of new element or NULL
*/

dlistint_t *add_dnode_(dlistint_t **head, const int n)
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
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: first node of list
* @idx: index of the list where new node is added
* @n: number to assign to inserted node
*
* Return: address of the new node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *traverse = *h;
	unsigned int count = 0;

	if (idx > 0)
	{
		if (!traverse)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnode_(h, n));
	for (count = 0; traverse && count < idx - 1; count++)
	{
		traverse = traverse->next;
		if (!traverse)
			return (NULL);
	}
	new->next = traverse->next;
	traverse->next = new;
	new->prev = traverse;
	if (new->next)
		new->next->prev = new;
	return (new);
}
