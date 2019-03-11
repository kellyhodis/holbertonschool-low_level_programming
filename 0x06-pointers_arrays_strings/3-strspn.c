#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring
* @s: initial segment
* @accept: character to find first occurrence of
*
* Return: pointer to first occurrence of c in s or NULL
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j, flag;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	return (count);
}
