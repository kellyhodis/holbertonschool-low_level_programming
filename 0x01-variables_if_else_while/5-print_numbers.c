#include <stdio.h>
/**
* main - Prints single digit numbers of base 10 starting at zero
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		printf("%d", digit);
	putchar('\n');

	return (0);
}
