#include "lists.h"

/**
* free_list - frees a list_t list
* @head: list to free
*
* Return: nothing
*/

void free_list(list_t *head)
{
	list_t *hold;

	hold = head;
	while (head)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);
	}
	free (head);
}
