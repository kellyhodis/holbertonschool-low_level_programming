#include "holberton.h"
int _strlen(char *s);
/**
* puts_half - prints half of a string followed by new line
* @str: string to print half of
*
* Return: nothing
*/
void puts_half(char *str)
{
	int i, length, n;

	length = _strlen(str);
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;
	if (str)
	{
		for (i = n; i < length; i++)
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

