#include "holberton.h"
/**
* print_sign  - returns 1 and prints + if @n > 0
* returns 0 and prints 0 if n = 0
* returns -1 and prints - if n < 0
* @n: the input to be checked
*
* Return: 1 if positive, 0 if 0, -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
