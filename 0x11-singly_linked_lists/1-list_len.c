#include "lists.h"

/**
* list_len - counts number of elements in a linked list_t list
* @h: linked list_t list to traverse
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
