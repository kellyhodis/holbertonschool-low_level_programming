#include "holberton.h"
/**
* print_alphabet_x10  - prints the alphabet in lowercase followed by a new line
* repeated x 10
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
