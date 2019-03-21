#include "lists.h"
/**
* print_list - prints all elements of a list_t list
* @h: list to print elements of
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current_t = h;

	while (current_t != NULL)
	{
		printf("[%i] %s\n", h->len, h->str);
		current_t = current_t->next;
		count++;
	}
	return (count);
}
