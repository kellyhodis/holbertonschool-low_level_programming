#include "holberton.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string of 0's and 1's
*
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i, decimal, sum;

	decimal = 1;
	sum = 0;

	/* check for array parameter */
	if (!b)
		return (0);

	/* get length of string */
	for (i = 0; b[i]; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		/* if there is a char that is not 0 or 1 return */
		if (b[i] != '0' && b[i] != '1')
			return (0);
		/* if the char is 1 add the decimal counter */
		if (b[i] == '1')
			sum += decimal;
		decimal *= 2;
	}
	return (sum);
}
