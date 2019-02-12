#include "holberton.h"
/**
* _isalpha  - returns 1 if c is a letter, uppercase or lowercase
* @c: the input to be checked
*
* Return: 0
*/
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	return (0);
}
