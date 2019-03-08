#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: size in bytes allowed for two strings
*
* Return: allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int j, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < _strlen(s2))
		p = malloc(_strlen(s1) + n + 1);
	else
		p = malloc(_strlen(s1) + _strlen(s2) + 1);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[j + i] = s2[j];
	p[j + i] = '\0';
	if (!p)
		return (NULL);
	return (p);
}
/**
* _strlen - returns the length of a string
* @s: input string
*
* Return: 0
*/
unsigned int _strlen(char *s)
{
	unsigned int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	return (length);
}
