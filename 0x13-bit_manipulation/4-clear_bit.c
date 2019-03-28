#include "holberton.h"
/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number
* @index: index at which to change the bit
*
* Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = ~(1 << index) & (*n);
	return (1);
}
