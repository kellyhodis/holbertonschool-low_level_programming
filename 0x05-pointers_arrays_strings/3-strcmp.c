#include "holberton.h"
/**
* _strcmp - compares two strings
* @s1: first string to be compared
* @s2: second string to be compared
*
* Return: value of difference
*/
int _strcmp(char *s1, char *s2)
{
	int value1, value2, count;
	
	value1 = 0;
	for (count = 0; s1[count] != '\0'; count++)
		value1 += s1[count];
	
	value2 = 0;
	for (count = 0; s2[count] != '\0'; count++)
		value2 += s2[count];

	return (value1 - value2);
}
