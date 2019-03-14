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
	int int1, int2, result;
	char o = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (o != '+' || o != '-' || o != '*' || o != '/' || o != '%')
	{
		printf("Error\n");
		exit(99);
	}
	{
		int1 = atoi(argv[1]);
		int2 = atoi(argv[3]);
	}
	result = (*get_op_func(argv[2]))(int1, int2);
	printf("%d\n", result);
	return (0);
}
