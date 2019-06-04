#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table struct
 * @size: size of the table
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declare variables */
	hash_table_t *new_table;
	hash_node_t **new_array;

	/* allocate memory for the hash table */
	new_table = malloc(sizeof(hash_table_t));

	/* check for memory allocation error */
	if (!new_table)
		return (NULL);

	/* allocate memory for the hash node */
	new_array = malloc(size);

	/* check for memory allocation error */
	if (!new_array)
	{
		free(new_table);
		return (NULL);
	}

	/* assign values to table struct */
	new_table->size = size;
	new_table->array = new_array;
	/* return a pointer to a hash table */
	return (new_table);
}
