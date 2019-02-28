#include "holberton.h"
#include <stdio.h>
/**
* _iterate - loops through the control statements until a match is returned or 
* the first string ends
* @s1: first string to be compared
* @s2: second string to be compared, one with wild card
*
* Return 1 if identical, 0 if not
*/
int wildchmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		printf("%d is null\n", *s1);	
		if (*s2 == '*')	
		{
			printf("s2 is *\n"); 
			return (1);
		}	
		else
			return (0);	
	}
	else if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1++, s2++));
	return (0);
}
int wildcmp(char *s1, char *s2)
{
	if (s1++ && s2++)
		return (wildcmp(s1, s2));
	return (0);
}
