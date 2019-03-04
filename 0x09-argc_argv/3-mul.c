#include <stdio.h>
/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
*
* Return: sum of two positive numbers or 1 if error
*/
int main(int argc, char *argv[])
{
	int num1, num2, i, j = 1, product;

	num1 = 0, num2 = 0;
	while (j < argc)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (argv[j][i] <= '9' && argv[j][i] >= '0')
			{
				if (j == 1)
					num1 = num1 * 10 + argv[j][i] - '0';
				if (j == 2)
					num2 = num2 * 10 + argv[j][i] - '0';
			}
			else if (argv[j][i] > '9' || argv[j][i] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		j++;
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = num1 * num2;
	printf("%d\n", product);
	return (product);
}
