#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
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
	char *iterate;
        strcpy(form, format);
        va_start(listva, format);
        while (form[i] != '\0')
	{
                if (form[i] == 'c')
		{
			printf("%c", va_arg(listva, int));

		}
		if (form[i] == 'i')
		{
			printf("%i", va_arg(listva, int));
		}
		if (form[i] == 'f')
		{
			printf("%f", va_arg(listva, double));
		}
		if (form[i] == 's')
		{
			iterate = va_arg(listva, char*);
			if (!iterate)
				iterate = "(nil)";
			printf("%s", iterate);
		}
                i++;
        }
        va_end(listva);
	free(memallo);
        printf("\n");
}

