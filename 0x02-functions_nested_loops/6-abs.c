#include "holberton.h"
/**
* _abs - computes the absolute value of an integer
* @x: integer to be tested
*
* Return: 0
*/
int _abs(int x)
{
	int test;

	test = x / -1;
	if (test >= 0)
		return (test);
	else
		return (x);
}
