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

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
