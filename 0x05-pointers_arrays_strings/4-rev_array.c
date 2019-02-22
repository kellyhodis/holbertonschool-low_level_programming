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
	int i, hold[100], init, swap;

	for (i = 0; i < n; i++)
		hold[i] = a[i];
	for (swap = 0, init = i - 1; swap < n; swap++, init--)
		a[swap] = hold[init];
	a[swap + 1] = '\0';
}
