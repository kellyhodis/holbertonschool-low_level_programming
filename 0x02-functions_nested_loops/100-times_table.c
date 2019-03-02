#include "holberton.h"
/**
* three_dig - prints the series of characters if i * j is > 100
* @n: number to analyze
*
* Return: nothing
*/
void three_dig(int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(n / 100 + '0');
	if ((n % 100) / 10 <= 0)
		_putchar('0');
	else
		_putchar((n % 100) / 10 + '0');
	_putchar(n % 10);
}
/**
* print_times_table - prints the n times table, starting with 0
* @n: the number times table
*
* Return: nothing
*/
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j > 99)
				{
					three_dig(i * j);
				}
				else if (i * j / 10 > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(i * j / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(i * j % 10 + '0');
				}
				else
					_putchar(i * j % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
