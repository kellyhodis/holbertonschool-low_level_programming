#include "holberton.h"
/**
* _strchr - locates a character in a string
* @s: string to examine
* @c: character to find first occurrence of
*
* Return: pointer to first occurrence of c in s or NULL
*/
char *_strchr(char *s, char c)
{

	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
