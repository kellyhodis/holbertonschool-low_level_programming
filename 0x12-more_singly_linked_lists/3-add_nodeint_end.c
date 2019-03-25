#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to where current listint_t list begins
* @n: element to add to new node
*
* Return: address of new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* new node*/
	listint_t *new;
	listint_t *current = *head;

	/* allocate memory for new node */
	new = (listint_t *)malloc(sizeof(listint_t));
	/* check for successful allocation */
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	/* if first element points to NULL set head to point to new */
	if (!(*head))
	{
		*head = new;
	}
	/* if first element doesn't point to NULL */
	else
	{
		/* while the current node is not the last */
		while (current->next)
			current = current->next;
		/* set the last node to point to the new node */
		current->next = new;
	}
	/* return address of new node */
	return (new);
}
