#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	/* counters and flags */
	unsigned int i, j;
	int flag;
	int hold;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				flag = 1;
				hold = array[j];
				array[j] = array[j + 1];
				array[j + 1] = hold;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
