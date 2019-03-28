#include "holberton.h"
#include <limits.h>
/**
* print_binary - prints the binary representation of a number
* @n: number to convert
*
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int decimal = 1, num = 0;

	if (n < 2)
	{
		if (n == 0)
			_putchar('0');
		else if (n == 1)
			_putchar('1');
		return;
	}
	while (decimal < ULONG_MAX && (decimal * 2) <= n)
		decimal *= 2;
	while (decimal >= 1)
	{
		if (num + decimal <= n)
		{
			_putchar('1');
			num += decimal;
		}
		else
			_putchar('0');
		decimal /= 2;
	}
}
