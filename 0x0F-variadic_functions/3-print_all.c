#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct op
{
	char s;
	void (*f)(va_list list);
} type;

/**
* print_c - prints a char value
* @c: char to print
*
* Return: nothing
*/
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
* print_numf - prints a float value
* @num: float to print
*
* Return: nothing
*/
void print_numf(va_list list)
{
        printf("%f", va_arg(list, double));
}
/**
* print_string - prints a string
* @s: string to print
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
* print_c - prints a char value
* @c: char to print
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
	char *separator = ", ";
	void *memallo = malloc(strlen(format) + 1);
	char *form = memallo;
/*	int param;
	int count = 0;

*/
	type array[] = {
		{'i', print_numi},
		{'s', print_string},
		{'c', print_c},
		{'f', print_numf},
		{'\0', NULL}};
	va_list list;
	strcpy(form, format);
        va_start(list, format);
	while (form[i] != '\0')
	{
		while (array[j].s != '\0')
		{
			if (form[i] == array[j].s)
			{
				array[j].f(list);
				if (form[i + 1] != '\0')
					printf("%s", separator);
			}
			j++;
		}
		i++;
		j = 0;
        }
	free(memallo);
        printf("\n");
	va_end(list);
}

