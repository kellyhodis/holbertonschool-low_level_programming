#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* print_c - prints a char value
* @list: list from which to extract char
*
* Return: nothing
*/
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
* print_numf - prints a float value
* @list: list from which to extract argument
*
* Return: nothing
*/
void print_numf(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
* print_string - prints a string
* @list: list from which to extract argument
*
* Return: nothing
*/
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}
/**
* print_numi - prints an integer
* @list: list from which to extract argument
*
* Return: nothing
*/
void print_numi(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *separator = "";
	type array[] = {
		{'i', print_numi},
		{'s', print_string},
		{'c', print_c},
		{'f', print_numf},
		{'\0', NULL}};
	va_list list;

	va_start(list, format);
	while (format[i] != '\0')
	{
		while (array[j].s != '\0')
		{
			if (format[i] == array[j].s)
			{
				printf("%s", separator);
				array[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(list);
}

