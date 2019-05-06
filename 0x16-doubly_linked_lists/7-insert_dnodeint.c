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

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	count = 0;
	new->n = n;
	traverse = *h;
	if (count == idx)
	{
		new->prev = NULL;
		if (traverse)
		{
			new->next = traverse;
			traverse->prev = new;
		}
		else
			new->next = NULL;
		*h = new;
		return (new);
	}
	while (traverse && count != idx)
	{
		count++;
		if (count == idx || count + 1 == idx)
		{
			if (!traverse->next)
				new->next = NULL;
			else
			{
				new->next = traverse->next;
				traverse->prev = new;
			}
			new->prev = traverse;
			traverse->next = new;
			return (new);
		}
		traverse = traverse->next;
	}
	free(new);
	return (NULL);
}
