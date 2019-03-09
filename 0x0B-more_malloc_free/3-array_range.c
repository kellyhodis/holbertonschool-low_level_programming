#include "holberton.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: minimum number
* @max: maximum number
*
* Return: pointer to array of integers
*/
int *array_range(int min, int max)
{
	char *p;
	int size, i, j;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}

