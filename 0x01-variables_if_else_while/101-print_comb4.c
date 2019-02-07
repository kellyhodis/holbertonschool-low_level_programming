#include <stdio.h>
/**
* main - Prints all different combinations of three digits
* separated by , and ' '
* printed in ascending order and using only putchar
*
* Return: 0
*/
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				if (digit1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
