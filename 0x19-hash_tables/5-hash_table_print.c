#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *placeholder;
	unsigned int i, flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			placeholder = ht->array[i];
			while (placeholder)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", placeholder->key,
					placeholder->value);
				flag = 1;
				placeholder = placeholder->next;
			}
		}
	}
	printf("}\n");
}
