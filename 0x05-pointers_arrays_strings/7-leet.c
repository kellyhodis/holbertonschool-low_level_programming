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
	int i, j;

	while (*l337)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; l337[j]; j++)
			{
				if (letter[i] == l337[j])
					l337[j] = num[i];
			}
		}
		l337++;
	}
	return (l337);
}
