#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array
* @nmemb: number of elements passed
* @size: size of elements passed in bytes
*
* Return: pointer to memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (!p)
		return (NULL);
	return (p);
}
