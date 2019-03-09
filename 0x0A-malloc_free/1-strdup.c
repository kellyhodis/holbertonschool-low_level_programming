#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
/**
* _strdup - returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str: string given as parameter
*
* Return: pointer
*/
char *_strdup(char *str)
{
	char *dup;
	int length, i;

	if (str == NULL)
		return (NULL);
	length = _strlen(str);
	printf("length = %d\n", length);
	dup = malloc(sizeof(char) * length + 1);
	if (!dup)
		return (NULL);
	for (i = 0; i < length; i++)
		dup[i] = str[i];
	return (dup);
	
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
