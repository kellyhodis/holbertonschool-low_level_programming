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
	listint_t *new;
	listint_t *place = *head;
	unsigned int count = 0;

	if (!head || !(*head))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (*head && count != idx)
	{
		if (count == idx - 1)
		{
			new->next = (*head)->next;
			(*head)->next = new;
		}
		else
			*head = (*head)->next;
		count++;
	}
	if (count != idx)
	{
		free(new);
		return (NULL);
	}
	*head = place;
	return (new);
}
