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
	void *p = malloc(nmemb * size);
	char *p2 = p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
		p2[i] = 0;
	return (p);
}
