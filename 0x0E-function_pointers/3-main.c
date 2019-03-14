#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && int2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (get_op_func(argv[2]))(int1, int2);
	printf("%d\n", result);
	return (0);
}
