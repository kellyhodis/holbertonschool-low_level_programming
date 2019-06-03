#include "hash_table.h"
/* be sure to keep memory clean! */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declare variables */
	hash_table_t *new_table;
	hash_node_t *new_node;

	/* allocate memory for the hash table */ 
	new = malloc(sizeof(hash_table_t));

	/* check for memory allocation error */
	if (!new_table)
		return (NULL);

	/* allocate memory for each element of the array
	   the array should have size elements */
	/* assign values / initialize data inside each node */
	for (i = 0; i < size; i++)
	{ 
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
		{
			free(new_table);
			return (NULL);
		}
		
		/* error check */
	}
	/* return a pointer to a hash table */
	return (new_table);
}
