#include <stdio.h>
/**
* main - computes and prints the sum of all the multiples of
* of 3 or 5 below 1024 (excluded), followed by a new line
*
* Return: 0
*/
int main(void)
{
	int i = 0, count = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			count += i;
		else if (i % 5 == 0)
			count += i;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
