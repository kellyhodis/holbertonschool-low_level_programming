#include "holberton.h"
/**
* _print_rev_recursion - prints a string in reverse
* @s: string to print
*
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s += 1;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
