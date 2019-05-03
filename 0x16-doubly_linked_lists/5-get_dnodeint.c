#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a doubly linked list
* @head: head of the list
* @index: index of the nth node
*
* Return: nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (!head)
		return (NULL);

	while (head && count != index)
	{
		head = head->next;
		count++;
	}

	if (head)
		return (head);
	return (NULL);
}
