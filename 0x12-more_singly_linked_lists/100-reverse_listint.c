#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to the pointer to the head of the linked list
*
* Return: pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold, *swap;

	if (!head)
		return (NULL);
	swap = *head;
	while (swap->next)
	{
		hold = swap->next;
		swap->next = hold->next;
		hold->next = *head;
		*head = hold;
	}
	return (*head);
}
