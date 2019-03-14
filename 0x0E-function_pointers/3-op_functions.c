#include "3-calc.h"
#include <stdio.h>
/**
* op_add - returns sum of two integers
* @a: integer
* @b: integer
*
* Return: int sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - returns the difference between two integers
* @a: integer
* @b: integer
*
* Return: int difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - returns the product of two integers
* @a: integer
* @b: integer
*
* Return: int product
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - returns division of a by b
* @a: integer
* @b: integer
*
* Return: int division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - returns remainder of division of a / b
* @a: integer
* @b: integer
*
* Return: int remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
