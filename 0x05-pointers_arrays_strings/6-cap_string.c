#include "holberton.h"
/**
* cap_string - capitalizes all words of a string
* @s: string to manipulate
*
* Return: edited string
*/
char *cap_string(char *s)
{
	int i, j;
	char a1[6] = {' ', '\t', '\n', ',', ';', '.'};
	char a2[7] = {'!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a2[j] != '\0'; j++)
		{
			if (a2[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] < 'z')
					s[i + 1] -= 32;
			}
		}

		for (j = 0; a1[j] != '\0'; j++)
		{
			if (a1[j] == s[i])
			{
				if (s[i + 1] > 'a' && s[i + 1] < 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
