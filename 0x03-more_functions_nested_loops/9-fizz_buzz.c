#include <stdio.h>
#include "holberton.h"
/**
* main - prints numbers from 1 to 100 followed by a new line, except
* for multiples of 3 and 5, which print "Fizz" and "Buzz" respectively
*
* Return: 0
*/
int main(void) 
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	return (0);
}