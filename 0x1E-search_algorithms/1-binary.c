#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * binary search algorithm
 * @array: pointer to first element of array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 or index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, j, low, high;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (high >= low)
	{

		i = (low + high) / 2;
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%lu", j);
			if (j < high)
				printf(", ");
		}
		printf("\n");
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
