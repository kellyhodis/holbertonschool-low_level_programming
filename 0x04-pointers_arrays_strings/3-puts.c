#include "holberton.h"
/**
* _puts - prints a string followed by a new line to stdout
* @str: input pointer string
*/
void _puts(char *str)
{
	int length;

	for (length = 0; *(str + length) != '\0'; length++)
	{
		_putchar(*(str + length));
	}
	_putchar('\n');
}
