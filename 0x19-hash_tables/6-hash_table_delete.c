#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *placeholder, *free_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			placeholder = ht->array[i];
			while (placeholder)
			{
				free_node = placeholder;
				placeholder = placeholder->next;
				free(free_node->key);
				free(free_node->value);
				free(free_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
