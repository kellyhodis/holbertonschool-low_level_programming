#include "lists.h"

/**
* sum_listint - sums all the data of a listint_t linked list
* @head: listint_t linked list to sum the data of
*
* Return: sum of all the data
*/

int sum_listint(listint_t *head)
{
	/* variable to sum the data of each node */
	int sum = 0;

	/* check if list is empty */
	if (!head)
		return (sum);
	/* traverse list */
	while (head)
	{
		/* add current node's n value to sum */
		sum += head->n;
		/* point head to the next node */
		head = head->next;
	}
	return (sum);
}
