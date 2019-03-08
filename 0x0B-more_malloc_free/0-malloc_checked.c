#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory
* @b: amount of memory to allocate
*
* Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
