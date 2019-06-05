#include "hash_tables.h"

/**
 * key_index - returns index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which key/value pair stored in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* declare variables */
	unsigned long int index = 0;

	/* compute index by using hash function */
	if (key)
		index = hash_djb2(key);

	/* adjust index for size of array */
	if (size != 0)
		index = index % size;

	/* return an unsigned long int representing index of key */
	return (index);
}
