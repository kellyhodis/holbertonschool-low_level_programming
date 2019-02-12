#include "holberton.h"
/**
* _islower  - returns 1 if c is lowercase
* @c: the input to be checked
*
* Return: 0
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
