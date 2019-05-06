#include "lists.h"

/**
* add_dnodeint - add a new node at the beginning of a doubly linked list
* @head: head of the list
* @n: number to insert in the new node
*
* Return: address of new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
