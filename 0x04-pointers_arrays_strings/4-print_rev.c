#include "holberton.h"
/**
* print_rev - prints a string in reverse followed by a newline
* @s: input pointer string
*/
void print_rev(char *s)
{
	int index, decr;

	for (index = 0; *(s + index) != '\0'; index++)
	{
	}
	for (decr = index - 1; decr >= 0; decr--)
	{
		_putchar(*(s + decr));
	}
	_putchar('\n');
}
