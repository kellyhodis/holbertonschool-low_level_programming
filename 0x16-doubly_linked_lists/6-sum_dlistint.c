#include "lists.h"

/**
* sum_dlistint - gets the sum of all the data of a doubly linked list
* @head: first node of list
*
* Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
