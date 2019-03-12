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
	int i;

	while (*l337)
	{
		for (i = 0; i < 10; i++)
		{
			if (letter[i] == l337[i])
				l337[i] = num[i];
		}
		l337++;
	}
	return (l337);
}
