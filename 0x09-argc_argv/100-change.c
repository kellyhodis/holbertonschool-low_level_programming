#include <stdio.h>
/**
* main - prints the minimum number of coins to make change for amt of money
* @argc: argument count
* @arvg: argument vector
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int count = 0, i, num;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	num = atoi(argv[1]);
	for (i = 0; i < 4; i++)
	{
		if (num % coins[i] == 0)
		{	
			count += num / coins[i];
			num %= coins[i];
		}
	}
	if (num != 0)
		count += num;
	return (0);
} 
