#include "holberton.h"
/**
* _strncpy - copies a string
* @src: string to be copied
* @dest: string to copied to
* @n: limit to size of src variable for appending
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n && src[length] != '\0'; length++)
		dest[length] = src[length];
	for ( ; length < n; length++)
		dest[length] = '\0';

	return (dest);
}
