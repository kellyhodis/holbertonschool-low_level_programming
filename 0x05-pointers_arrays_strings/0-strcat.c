#include "holberton.h"
/**
* _strcat - concatenates two strings
* @src: string to be appended
* @dest: string to append to
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int length_dest, length_src;

	for (length_dest = 0; dest[length_dest] != '\0'; length_dest++)
		;
	for (length_src = 0; src[length_src] != '\0'; length_src++)
		dest[length_dest + length_src] = src[length_src];
	dest[length_dest + length_src] = '\0';

	return (dest);
}
