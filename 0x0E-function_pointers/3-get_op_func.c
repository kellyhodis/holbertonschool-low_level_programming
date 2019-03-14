#include "3-calc.h"
#include <stdio.h>
/**
* get_op_func - selects correct function to perform operation
* @s: operator passed as argument
*
* Return: function pointer
*/
int (*get_op_func(char *s))(int a, int b)
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
	i = 0;
	while (i < 5)
	{
		if (s[0] == *(ops[i].op))
		{
			return(ops[i].f);
		}
		i++;
	}
	return (NULL);
}
