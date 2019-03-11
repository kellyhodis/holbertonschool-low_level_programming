#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
*
* Return: pointer to newly allocated space in memory containing two strings
*/
char *str_concat(char *s1, char *s2)
{

	char *str12;
	int len1, len2, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	str12 = malloc(len1 + len2 + 1);
	if (!str12)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		str12[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		str12[i + j] = s2[j];
	}
	str12[i + j] = '\0';
	return (str12);
}
/**
* _strlen - returns the length of a string
* @s: input string
*
* Return: 0
*/
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	return (length);
}
