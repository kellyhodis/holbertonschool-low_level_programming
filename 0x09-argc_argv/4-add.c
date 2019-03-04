#include <stdio.h>
/**
* main - adds positive numbers passed to argv
* @argc: argument count
* @argv: argument vector
*
* Return: sum of two positive numbers or 1 if error
*/
int main(int argc, char *argv[])
{
	int num, i, j = 1, sum = 0;

	while (j < argc)		
	{
		num = 0;
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (argv[j][i] <= '9' && argv[j][i] >= '0')
			{
				printf("element = %d\n", argv[j][i] - '0');
				num = num * 10 + argv[j][i] - '0';
				printf("num = %d\n", num);
			}
			else if (argv[j][i] > '9' || argv[j][i] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
		j++;
	}
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", sum);
	return (sum);
}
