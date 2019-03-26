#include "holberton.h"
/**
* leet - encodes a string into l337
* @l337: - string to encode
*
* Return: pointer to encoded string
*/
char *leet(char *l337)
{
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i = 0, j;

	while (l337[i])
	{
		for (j = 0; j < 10; j++)
		{

			if (letter[j] == l337[i])
				l337[i] = num[j];
		}
		i++;
	}
	return (l337);
}
