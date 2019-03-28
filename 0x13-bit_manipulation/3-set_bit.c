#include "holberton.h"
/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to the number
* @index: index at which to change the bit
*
* Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
