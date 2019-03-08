#include "holberton.h"
/**
* puts2 - prints one char out of a 2 char string, followed by new line
* @str: string to parse
*
*/
void puts2(char *str)
{
	int i, length;

	length = _strlen(str);
	for (i = 0; i < length; i += 2)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
/**
* _strlen - returns the length of a string
* @s: input string
*
* Return: 0
*/
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	return (length);
}
