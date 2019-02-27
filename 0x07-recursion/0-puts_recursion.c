#include "holberton.h"
/*
* _puts_recursion - prints a string followed by a new line
* @s: string to print
*
* Return: Nothing
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s += 1;
		_puts_recursion(s);
	}
	else if (*s == 0)
		_putchar('\n');
}
