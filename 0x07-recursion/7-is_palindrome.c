#include "holberton.h"
/**
* _strlen_recursion - returns the length of a string
* @s: string to parse
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
* _pal - checks string for palindrome
* @length: returned from helper function _strlen_recursion
* @s: string to be checked
* @num: iterator through string
*
* Return: 1 if palindrome, 0 if not
*/
int _pal(int length, char *s, int num)
{
	int middle = length / 2;

	if (num > middle)
		return (1);
	if (length % 2 == 0)
	{
		if (s[middle - num - 1] == s[middle + num])
			return (_pal(length, s, num + 1));
	}
	else if (length % 2 != 0)
	{
		if (s[middle - num] == s[middle + num])
		return (_pal(length, s, num + 1));
	}
	return (0);
}
/**
* is_palindrome - returns value from helper function _palindrome
* @s: string to be checked
*
* Return: value from helper function
*/
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) < 2)
		return (1);
	return (_pal(_strlen_recursion(s), s, 1));
}
