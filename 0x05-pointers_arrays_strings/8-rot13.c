#include "holberton.h"

/**
* rot13 - encodes a string using rot13
* @str: string to encode
*
* Return: the encoded string
*/

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] + 13 > 'z') || (str[i] <= 'Z' && str[i] + 13 > 'Z'))
				str[i] -= 13;
			else
				str[i] += 13;
			break;
		}
		i++;
	}

	/* return the encoded string */
	return (str);
}
