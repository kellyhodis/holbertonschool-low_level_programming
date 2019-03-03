#include <stdio.h>
/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	unsigned long n, m, hold;
	int count;

	n = 1, m = 2, count = 0;
	while (count < 98)
	{
		if (count == 97)
			printf("%lu", n);
		else
			printf("%lu, ", n);
		hold = n + m;
		n = m;
		m = hold;
		count++;
	}
	putchar('\n');
	return (0);
}
