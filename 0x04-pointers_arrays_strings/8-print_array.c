#include "holberton.h"
#include <stdio.h>
/**
* print_array - print n elements of an array of integers
* @a: an array of integers
* @n: the number of elements to print
*
* Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i == n - 1)
		printf("%d\n", a[i]);
	else
		printf("%d, ", a[i]);
	}
}
