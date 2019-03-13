#include "holberton.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to search
* @accept: string of bytes to accept
*
* Return: pointer to first occurrence in s that matches
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, flag;
	char *p;

	flag = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 0)
		return (0);
	return (p);
}
