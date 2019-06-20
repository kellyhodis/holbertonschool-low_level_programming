#include "sort.h"

/**
 * selection_sort - sorts array of integers using selection sort algorithm
 * @array: array to sort
 * @size: size of array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int n, i, idx;
	int smallest_num;
	int flag = 1;

	if (!array)
		return;
	if (size < 2)
		return;
	n = 0;
	while (flag)
	{
		for (i = n; i < size; i++)
		{
			if (i == n)
			{
				smallest_num = array[i];
				idx = i;
			}
			if (array[i] < smallest_num)
			{
				smallest_num = array[i];
				idx = i;
			}
			if (n == size - 1)
				flag = 0;
		}
		if (flag == 0)
			break;
		n++;
		if (idx != n - 1)
		{
			array[idx] = array[n - 1];
			array[n - 1] = smallest_num;
			print_array(array, size);
		}
	}
}
