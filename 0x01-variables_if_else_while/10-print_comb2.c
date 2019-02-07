#include <stdio.h>
/**
* main - Prints numbers from 00 to 99 separated by comma and space
* printed in ascending order and using only putchar
*
* Return: 0
*/
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			if (digit2 != 9 || digit1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
