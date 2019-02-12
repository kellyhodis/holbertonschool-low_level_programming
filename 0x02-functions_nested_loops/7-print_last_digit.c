#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @x: integer to be tested
*
* Return: digit
*/
int print_last_digit(int x)
{
	int digit;

	digit = x % 10;
	if (digit < 0)
		digit *= -1;
	_putchar('0' + digit);
	return (digit);
}
