#include "holberton.h"
#include <stdlib.h>
/**
* create_array - creates array and initializes it with specific char
* @size: size of the array
* @c: specific char for initializing
*
* Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);
	array = malloc(size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	if (!array)
		return (0);
	return (array);
}
