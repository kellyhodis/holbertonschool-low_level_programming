#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: pointer to head of the list_t list
* @str: string to be duplicated
*
* Return: address of new element of NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (new);
}
