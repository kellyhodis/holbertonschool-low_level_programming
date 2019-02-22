#include "holberton.h"
#include <stdio.h>
/**
* reverse_array - reverses the content of an array of integers
* @a: an array of integers
* @n: the number of elements to swap
*
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, j, swap;
	
	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
	}
}
