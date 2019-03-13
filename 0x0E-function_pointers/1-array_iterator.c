#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - execute a function given as a parameter on each element of an array
* @array: array to execute function on elements of
* @size: size of the array
* @action: pointer to function that will perform an action on the array element
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}