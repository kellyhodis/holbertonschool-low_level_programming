#include "sort.h"

/**
 * partition - partitions array
 * @array: array to partition
 * @low: lower bound
 * @high: higher bound
 * @size: size of array
 *
 * Return: index of pivot
 */

int partition(int *array, int low, int high, int size)
{
	int i, j, hold;

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[high] > array[j])
		{
			i++;
			hold = array[i];
			array[i] = array[j];
			array[j] = hold;
		}
	}
	if (array[i + 1] > array[high])
	{
		hold = array[i + 1];
		array[i + 1] = array[high];
		array[high] = hold;
	}
	print_array(array, size);
	return (i + 1);
}

/**
 * sort - recursive sorting function
 * @array: array to sort
 * @low: lower bound
 * @high: higher bound
 * @size: size of array
 *
 * Return: nothing
 */

void sort(int *array, int low, int high, int size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		sort(array, low, pivot - 1, size);
		sort(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers using Quick sort algorithm
 * Lomuto partition scheme
 * @array: array of integers to sort
 * @size: size of array
 *
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
