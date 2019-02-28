#include "holberton.h"
/**
* _sqrt - function for testing values against variable
* @n: variable to test against
* @x: testing values
*
* Return: test value that works
*/
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x > n / 2)
		return (-1);
	return (_sqrt(n, x + 1));
}
/**
* _sqrt_recursion - function for finding the square root of variable
* @n: number to find square root of
*
* Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (_sqrt(n, 0));
}
