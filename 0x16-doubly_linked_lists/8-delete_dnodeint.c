#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at an index in doubly linked list
* @head: head of list
* @index: index at which to delete node
*
* Return: 1 on succes or -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *traverse = *head, *hold;

	if (!traverse)
		return (-1);
	if (index == 0 && traverse)
	{
		hold = traverse;
		if (traverse->next)
		{
			traverse->next->prev = NULL;
			*head = traverse->next;
		}
		else
			*head = NULL;
		free(hold);
		return (1);
	}
	for (count = 0; traverse && count < index - 1; count++)
	{
		traverse = traverse->next;
		if (!traverse || !traverse->next)
			return (-1);
	}
	hold = traverse->next;
	if (traverse->next->next)
	{
		traverse->next->next->prev = traverse;
		traverse->next = traverse->next->next;
	}
	else if (traverse->next)
		traverse->next = NULL;
	free(hold);
	return (1);
}


