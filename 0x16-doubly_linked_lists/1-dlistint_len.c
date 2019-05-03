#include "lists.h"

/**
* dlistint_len - gets the number of elements in a doubly linked list
* @h: head of list
*
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t number;

	number = 0;
	while (h)
	{
		h = h->next;
		number += 1;
	}

	return (number);
}
