#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of listint_t linked list
* @head: pointer to the head of the linked list
* @index: the index of the node that should be deleted
*
* Return: 1 if success or -1 if failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* number to compare to index */
	unsigned int count = 0;
	/* node placeholder to free node */
	listint_t *place = *head;
	/* node to hold beginning of head */
	listint_t *first = *head;

	/* check that list exists */
	if (!(*head))
		return (-1);
	/* if head does not point to NULL and index = 0 */
	if (*head && index == 0)
	{
		place = *head;
		*head = (*head)->next;
		free(place);
		return (1);
	}
	/* while head does not point to NULL and index hasn't been reached */
	while (*head && count != index)
	{
		if (count == index - 1)
		{
			place = (*head)->next;
			(*head)->next = (*head)->next->next;
			free(place);
			*head = (*head)->next;
		}
		else
			*head = (*head)->next;
		count++;
	}
	*head = first;
	if (count != index)
		return (-1);
	return (1);
}
