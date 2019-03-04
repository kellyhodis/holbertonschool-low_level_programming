#include "holberton.h"
#include <stdio.h>
/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 if success or 1 if error
*/
int main(int argc, char *argv[])
{
	int i, j = 1, product;
	int num[2], flag[2];

	num[1] = 0, num[2] = 0;
	while (j < argc)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (argv[j][i] <= '9' && argv[j][i] >= '0')
			{
				num[j] = num[j] * 10 + argv[j][i] - '0';
			}
			else if (argv[j][i] == '-')
				flag[j] = 1;
		}
		if (flag[j] == 1)
			num[j] *= -1;
		j++;
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = num[1] * num[2];
	printf("%d\n", product);
	return (0);
}
