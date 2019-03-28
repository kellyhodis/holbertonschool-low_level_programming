#include "holberton.h"
/**
* get_endianness - check the endianness of the machine
*
* Return: 0 if big, 1 if little
*/
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
