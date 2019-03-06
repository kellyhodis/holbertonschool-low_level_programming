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
	char *array = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return ('\0');
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
		if (!array || array[0] != c)
			return ('\0');
	}
	return (array);
}
