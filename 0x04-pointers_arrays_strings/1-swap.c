#include "holberton.h"
/**
* swap_int - swaps the values of the two inputs
* @a: input to be swapped
* @b: input to be swapped
*/
void swap_int(int *a, int *b)
{
	int hold = *b;
	*b = *a;
	*a = hold;
}
