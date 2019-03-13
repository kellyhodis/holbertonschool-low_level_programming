#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - prints a name
* @name: char array to print
* @f: function pointer
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}
