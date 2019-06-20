#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: doubly linked list of integers to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *run = *list;
	listint_t *hold, *swtch;

	/* check that there is a list */
	if (!list || !run)
		return;

	/* check that there are at least two elements starting from head */
	if (!run->next)
		return;

	/* run through list until NULL is reached */
	while (run->next)
	{
		/* compare first two elements */
		if (run->next->n < run->n)
		{
			/* swap */
			hold = run;
			swtch = run->next;

			swtch->prev = hold->prev;
			if (swtch->prev)
				swtch->prev->next = swtch;
			hold->next = swtch->next;
			if (hold->next)
				hold->next->prev = hold;
			hold->prev = swtch;
			swtch->next = hold;

			while (hold->prev)
				hold = hold->prev;
			*list = hold;
			print_list(*list);
			/* reset flag */
			run = *list;
		}
		else
			run = run->next;
	}
}
