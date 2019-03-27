#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: pointer to the list to free
*
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	/* placeholder */
	listint_t *place;

	/* check if *head exists */
	if (!head)
		return;
	/* perform only if head exists */
	while (*head)
	{
		/* set place to point to same location as head */
		place = *head;
		/* move head to point to next node's pointer */
		*head = (*head)->next;
		/* free current node */
		free(place);
	}
	/* set head to point to NULL */
	*head = NULL;
}
