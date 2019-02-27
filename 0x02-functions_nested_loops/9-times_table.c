#include "holberton.h"
/**
* times_table - prints the 9 times table
*
* Return: nothing
*/
void times_table(void)
{
	int i, j, first_dig;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j * i < 10)
			{
				_putchar(' ');
				_putchar(j * i + '0');
			}
			else
			{
				first_dig = j * i / 10;	
				_putchar(first_dig + '0');
				_putchar(j * i % 10 + '0');
			}
			if (j != 9)
			{	
				_putchar(',');
				_putchar(' ');	
			}	
		}
		_putchar('\n');
	}	
}
