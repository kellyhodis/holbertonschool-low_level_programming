#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key of element
 * @value: value of element
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declare variables */
	hash_node_t *new;
	unsigned long int index = 0;

	/* key cannot be empty string */
	if (!key || key[0] == '\0')
		return (0);

	/* allocate memory for new element */
	new = malloc(sizeof(hash_node_t));

	/* check for allocation errors */
	if (!new)
		return (0);

	/* make copies of key and value */
	new->key = strdup(key);
	new->value = strdup(value);

	/* get index of key */
	index = key_index((const unsigned char *)key, ht->size);

	/*  add node to array if no node at index exists */
	if (ht->array[index] == NULL)
		ht->array[index] = new;

	/* push node to front of list if node exists */
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	/* return success */
	return (1);
}
