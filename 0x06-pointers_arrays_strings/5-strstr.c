#include "holberton.h"
#include <stdio.h>
/**
* _strstr - locates a substring within a string
* @haystack: string to search
* @needle: substring to match
*
* Return: pointer to beginning of located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int flag = 0, i, j, k;

	if (!needle)
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		k = i;
		for (j = 0; needle[j]; j++)
		{
			while (haystack[k] == needle[j])
			{
				if (flag == 0)
				{
					p = &haystack[k];
					flag = 1;
				}
				j++;
				k++;
				if (needle[j + 1] == '\0')
					return (p);
			}
			flag = 0;
			break;
		}
	}
	return (NULL);
}
