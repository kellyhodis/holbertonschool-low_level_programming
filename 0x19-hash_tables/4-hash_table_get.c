#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *placeholder;

	index = key_index((const unsigned char *)key, ht->size);
	placeholder = ht->array[index];
	while (placeholder)
	{
		if (strcmp(key, placeholder->key) == 0)
			return (placeholder->value);
		placeholder = placeholder->next;
	}
	return (NULL);
}
