#include "holberton.h"
/**
* more_numbers - prints numbers from 0 to 14 10x followed by a newline
*
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 != 0)
				_putchar('1');
			_putchar(i % 10 + '0');

		}
		_putchar('\n');
	}
}
