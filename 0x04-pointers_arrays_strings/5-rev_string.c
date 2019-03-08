#include "holberton.h"
/**
* rev_string - prints a string in reverse followed by a newline
* @s: input pointer string
*/
void rev_string(char *s)
{
	char swap;
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
		;
	s[j] = '\0';
	j = j - 1;
	for (i = 0; i <= j; i++, j--)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
