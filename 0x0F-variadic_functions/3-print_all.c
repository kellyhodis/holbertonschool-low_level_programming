#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* print_c - prints a char value
* @c: char to print
*
* Return: nothing
*/
void print_c(char c)
{
        if (c)
                printf("%c", c);
}
/**
* print_numf - prints a float value
* @num: float to print
*
* Return: nothing
*/
void print_numf(double num)
{
        printf("%f", num);
}
/**
* print_string - prints a string
* @s: string to print
*
* Return: nothing
*/
void print_string(char *s)
{
        if (s)
                printf("%s", s);
	else
		printf("%s", "(nil)");
}
/**
* print_c - prints a char value
* @c: char to print
*
* Return: nothing
*/
void print_numi(int c)
{
	printf("%d", c);
}
/**
* get_type - calls the correct function based on type
* @vartype: character that stands for variable type
*
* Return: nothing
*/
void get_type(char c, int param)
{
	if (c == 'c')
		print_c(param);	
	else if (c == 'i')
		print_numi(param);
}

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*
* Return: nothing
*/
void print_all(const char * const format, ...)
{
        va_list listva;
        int i = 0;
        void *memallo = malloc(strlen(format) + 1);
	char *form = memallo;
	int param;
	int count = 0;

        strcpy(form, format);
        va_start(listva, format);
        while (form[i] != '\0')
	{
		if (form[i] == 'c' || form[i] == 'i')
		{
			param = va_arg(listva, int);
			get_type(form[i], param);
		}
		while ((form[i] == 'f' || form[i] == 's') && count == 0)
		{
			if (form[i] == 's')
			{
				print_string(va_arg(listva, char*));
				count++;
				break;
			}
			print_numf(va_arg(listva, double));
			count++;
		}
		count--;
                i++;
        }
        va_end(listva);
	free(memallo);
        printf("\n");
}

