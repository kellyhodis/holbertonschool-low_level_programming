#include "holberton.h"
/**
* _isdigit -  checks for a digit (0 through 9), returns 1 if c is a digit
* @c: input to be checked
*
* Return: 0
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
