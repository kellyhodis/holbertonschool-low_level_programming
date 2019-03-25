#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the first node of the linked list
* @idx: index of the list where the new node should be added
* @n: data to place into the new node
*
* Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* new node to insert */
	listint_t *new;
	/* placeholder node */
	listint_t *place = *head;
	/* number to compare to index */
	unsigned int count = 0;

	/* allocate memory to new node */
	new = malloc(sizeof(listint_t));
	/* if malloc fails, return NULL */
	if (!new)
		return (NULL);
	/* assign data to new node */
	new->n = n;
	/* while head does not point to NULL and index hasn't been reached */
	while (*head && count != idx)
	{
		/* if the next node is at the given index */
		if (count == idx - 1)
		{
			/* point the new node to the current node's next */
			new->next = (*head)->next;
			/* point the current node's next to new instead */
			(*head)->next = new;
		}
		/* traverse the linked list */
		else
			*head = (*head)->next;
		count++;
	}
	/* if the number of nodes do not amount to desired index return NULL */
	if (count != idx)
		return (NULL);
	/* point head back to first node */
	*head = place;
	return (new);
}
