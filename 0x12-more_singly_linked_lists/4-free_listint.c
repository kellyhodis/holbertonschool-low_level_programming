#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: listint_t list to free
*
* Return: nothing
*/

void free_listint(listint_t *head)
{
	/* placeholder */
	listint_t *place;

	/* perform only if head exists */
	while (head)
	{
		/* set place to point to same location as head */
		place = head;
		/* move head to point to the next node's pointer */
		head = head->next;
		/* free current node */
		free(place);
	}
	/* free last existing node */
	free(head);
}
