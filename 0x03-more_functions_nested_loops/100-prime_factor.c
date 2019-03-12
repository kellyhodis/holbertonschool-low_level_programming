#include "holberton.h"
#include <stdio.h>
/**
* main - find and print the largest prime factor of
* 612852475143
*
* Return: 0
*/
int main(void)
{
	long flag = 0, i;
	long number = 612852475143;
	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			number /= i;
			flag = i;
		}
	}
	printf("%ld\n", flag);
	return (0);
}
