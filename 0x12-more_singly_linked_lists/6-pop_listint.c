#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to the head node of a listint_t linked list
*
* Return: the head node's data
*/

int pop_listint(listint_t **head)
{
	/* head node's data */
	int data = 0;
	/* current node */
	listint_t *current = *head;

	/* check if linked list is empty */
	if (!(*head))
		return (data);
	/* if linked list is not empty */
	else
	{
		/* set data to head node's data */
		data = current->n;
		/* point head to the next node */
		*head = current->next;
		/* free the current node */
		free(current);
	}
	/* return the now-popped node's data */
	return (data);

}
