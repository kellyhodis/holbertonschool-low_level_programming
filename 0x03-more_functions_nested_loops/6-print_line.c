#include "holberton.h"
/**
* print_line - draws a straight line in the terminal
* @n: tells function how many lines to draw
*/
void print_line(int n)
{
	int i;

	if (i > 0)
	{
		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
