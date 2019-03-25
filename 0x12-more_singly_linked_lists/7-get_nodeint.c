#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: linked list to return nth node of
* @index: index of the node to return
*
* Return: address of the nth node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* number to compare to index */
	unsigned int count = 0;

	/* check to see if the passed head parameter exists */
	if (!head)
		return (NULL);
	/* while head does not point to NULL and index hasn't been reached */
	while (head && count != index)
	{
		/* increment the counter until it reaches index value */
		count++;
		/* traverse linked list */
		head = head->next;
	}
	return (head);
}
