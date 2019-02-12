#include "holberton.h"
/**
* main - prints Holberton followed by a newline
*
* Return: 0
*/
int main(void)
{
	char Holberton[10] = "Holberton\n";
	int i = 0;

	while (i != 30)
	{
	_putchar(Holberton[i]);
	i++;
	}
	return (0);
}
