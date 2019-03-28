#include "holberton.h"

/**
* flip_bits - returns the number of bits to flip to get from n to m
* @n: first number
* @m: second number
*
* Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nm;
	int i = 0;

	nm = n ^ m;
	while (nm)
	{
		i += nm & 1;
		nm >>= 1;
	}
	return (i);
}
