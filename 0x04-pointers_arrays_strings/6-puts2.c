#include "holberton.h"
/**
* puts2 - prints one char out of a 2 char string, followed by new line
* @str: string to parse
*
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	if (str[0])
		_putchar('\n');
}
