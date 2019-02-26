#include "holberton.h"
/**
* _memcpy - copies the first n bytes of the memory area
* pointed to by src to memory area pointed to by dest
* @dest: memory area being copied to
* @src: memory area being copied
* @n: number of bytes in memory area being copied
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
