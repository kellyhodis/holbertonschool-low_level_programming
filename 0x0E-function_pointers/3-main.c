#include "3-calc.h"
#include <stdio.h>
/**
* main - calls functions
* @argc: argument count
* @argv: argument vector
*
* Return: 0 
*/
int main(int argc, char *argv[])
{
	char ops[6] = {'+', '-', '*', '/', '%'};
	int int1, int2, result, *;
	char *o;
	if (argc == 4)
	{
		int1 = atoi(argv[1]);
		int2 = atoi(argv[3]);
		o = argv[2][0]

		if (o == '/' || o == '%)
		{
			if (int2 == 0)
			{
				printf("Error\n");
				exit(100);
			}
		}
		else if (o == '+' || o == '-' || o == '*')
		{
			result = (*get_op_func(o))(int1, int2);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
