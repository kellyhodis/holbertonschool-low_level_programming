#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: listint_t list to print elements of
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	/* count nodes */
	size_t count = 0;

	/* checks if struct exists */
	if (!h)
		return (0);
	/* as long as the current node exists */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
