#include "holberton.h"
#include <limits.h>
/**
* print_number - prints a number
* @n: number to print
*
* Return: nothing
*/
void print_number(int n)
{
	int i, num, remain, x, j = 0, divide = 1, flag = 0;

	if (n == INT_MIN)
		flag = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	remain = n % 10;
	num = n;
	for (i = 0; num / 10 != 0; i++)
		num /= 10;
	while (j < i)
	{
		divide *= 10;
		j++;
	}
	while (divide > 1)
	{
		x = (n / divide) % 10;
		_putchar(x + '0');
		divide /= 10;
	}
	if (flag == 1)
		_putchar(remain + '1');
	else
		_putchar(remain + '0');
}
