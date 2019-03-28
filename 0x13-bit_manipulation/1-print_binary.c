#include "holberton.h"
/**
* print_binary - prints the binary representation of a number
* @n: number to represent
*
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	int c = 0, cmax = sizeof(unsigned long int) * 8;
	unsigned long int shift, decimal = 1;

	while (decimal <= n)
	{
		decimal *= 2;
		c++;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (c > cmax)
		c = cmax;
	for (c = c - 1; c >= 0; c--)
	{
		shift = n >> c;
		if (shift & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
