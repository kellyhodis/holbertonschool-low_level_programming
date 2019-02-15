#include "holberton.h"
/**
* _isupper  - returns 1 if the input is uppercase
*
* Return: 0
*/
int _isupper(int c)
{
	if (c > 64 && c <91)
		return (1);
	return (0);
}
