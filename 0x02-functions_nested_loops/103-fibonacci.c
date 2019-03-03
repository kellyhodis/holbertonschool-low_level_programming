#include <stdio.h>
/**
* main - print the sum of even-valued terms in the fibonacci sequence
* up to and including 4,000,000
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	unsigned long n, m, hold, sum;

	n = 1, m = 2, sum = 0;
	while (n <= 4000000)
	{
		if (n % 2 == 0)
			sum += n;
		hold = n + m;
		n = m;
		m = hold;
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}
