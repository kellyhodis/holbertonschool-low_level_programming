#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: pointer to the head of the listint_t list
* @n: integer element to add to new node
*
* Return: new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* new node*/
	listint_t *new;

	/* allocate memory for new node */
	new = malloc(sizeof(listint_t));
	/* check for successful allocation */
	if (!new)
		return (NULL);
	/* set int element of new node to given parameter */
	new->n = n;
	/* set next to point to where the current head points */
	new->next = *head;
	/* set head to point to  new */
	*head = new;
	/* return new node */
	return (new);
}
