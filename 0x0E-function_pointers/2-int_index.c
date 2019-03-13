#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: to be searched
* @size: size of array
* @cmp: function pointer used to compare values
*
* Return: first index of element of array cmp succeeds or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
