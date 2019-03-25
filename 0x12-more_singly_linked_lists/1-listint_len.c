#include "lists.h"

/**
* listint_len - counts the number of elements in a linked listint_t list
* @h: listint_t list to parse
*
* Return: number of elements in h
*/

size_t listint_len(const listint_t *h)
{
	/* number of elements in linked list */
	size_t count = 0;

	/* checks if linked list exists */
	if (!h)
		return (0);
	/* loops through list while the node is not null */
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
