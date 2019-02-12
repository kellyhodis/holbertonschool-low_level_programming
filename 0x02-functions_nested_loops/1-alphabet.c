#include "holberton.h"
/**
* print_alphabet  - prints the alphabet in lowercase followed by a new line
*
* Return: 0
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
