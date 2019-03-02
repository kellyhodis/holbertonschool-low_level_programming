#include <stdio.h>
/**
* print_to_98 - prints all the natural numbers from n to 98
* followed by a new line
* @n: beginning number
*
* Return: nothing
*/
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("98\n");
}
