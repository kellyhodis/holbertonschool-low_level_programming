#include "3-calc.h"
#include <stdio.h>
/**
* get_op_func - selects correct function to perform operation
* @s: operator passed as argument
*
* Return: function pointer
*/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
		
	if (o == '+' || o == '-' || o == '*')
	{
		if (o == '+')
			return (
	}
	else if (o == '/' || o == '%')
	{
		if (int2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		result = (*get_op_func(argv[2]))(int1, int2);
	}
	else
	{
	printf("Error\n");
	exit(99);
	}





}
