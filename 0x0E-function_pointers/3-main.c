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
	char o = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		int1 = atoi(argv[1]);
		int2 = atoi(argv[3]);
	}
	

		
		result = (*get_op_func(argv[2]))(int1, int2);
		printf("%d\n", result);
	}
	return (0);
}
