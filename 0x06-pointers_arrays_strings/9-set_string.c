#include "holberton.h"
/**
* set_string - set the value of a pointer to a char
* @s: pointer to a pointer to a string
* @to: set pointer to this pointer instead
*
* Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
