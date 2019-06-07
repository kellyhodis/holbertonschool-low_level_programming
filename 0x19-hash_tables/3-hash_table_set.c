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
	hash_node_t *new, *placeholder;
	unsigned long int index = 0;

	if (!key || key[0] == '\0' || !ht)
		return (0);
	/* get index of key */
	index = key_index((const unsigned char *)key, ht->size);
	/*  add node to array if no node at index exists */
	if (ht->array[index] != NULL)
	{
		/* check to see if key exists already */
		placeholder = ht->array[index];
		while (placeholder)
		{
			if (strcmp(key, placeholder->key) == 0)
			{
				placeholder->value = strdup(value);
				return (1);
			}
			placeholder = placeholder->next;
		}
	}

	new = calloc(1, sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	/* return success */
	return (1);
}
