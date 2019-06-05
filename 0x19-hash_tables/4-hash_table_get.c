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

	index = hash_djb2((const unsigned char *)key);

	while (ht->array[index]->next)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	if (strcmp(key, (ht->array[index])->key) == 0)
		return (ht->array[index]->value);
	return (NULL);
}
