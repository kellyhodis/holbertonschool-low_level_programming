#include <stdio.h>
/**
* main - Prints all different combinations of two two-digit numbers
* separated by , and ' '
* printed in ascending order and using only putchar
*
* Return: 0
*/
int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 8; digit2++)
		{
			for (digit3 = digit1; digit3 <= 9; digit3++)
			{
				for (digit4 = digit2 + 1; digit4 <= 9; digit4++)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(' ');
					putchar(digit3 + '0');
					putchar(digit4 + '0');
					if (digit2 != 8 || digit1 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
