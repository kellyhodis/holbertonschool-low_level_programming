#include "holberton.h"
/**
* _memset - fills the first n bytes of the memory area
* pointed to by s with the constant byte b
* @s: memory area pointed to by s
* @b: constant
* @n: number of bytes in memory area pointed to by s
*
* Return: s 
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s); 
} 
