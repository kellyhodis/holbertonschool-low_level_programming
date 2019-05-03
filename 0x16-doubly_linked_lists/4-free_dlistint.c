#include "lists.h"

/**
* free_dlistint - frees a doubly linked list
* @head: head of list
*
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	if (!head)
		return;

	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
