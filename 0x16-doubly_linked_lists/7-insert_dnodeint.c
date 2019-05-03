#include "lists.h"

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
	dlistint_t *new, *traverse;
	unsigned int count;

	if (!*h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	count = 0;
	traverse = *h;
	while (traverse && count != idx)
	{
		count++;
		if (count == idx)
		{
			new->next = traverse->next;
			new->prev = traverse;
			traverse->next = new;
			new->n = n;
			return (new);
		}
		traverse = traverse->next;
	}

	free(new);
	return (NULL);
}
