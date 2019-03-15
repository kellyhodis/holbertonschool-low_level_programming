#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - prints strings followed by a new line
* @separator: string to be printed between strings
* @n: number of strings passed to the function
*
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list listva;
	char *iterate;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(listva, n);
	for (i = 0; i < n; i++)
	{
		iterate = va_arg(listva, char*);
		if (!iterate)
		{
			iterate = "(nil)";
		}
		if (separator && (i < n - 1))
		{
			printf("%s%s", iterate, separator);
		}
		else
		{
			printf("%s", iterate);
		}
	}
	va_end(listva);
	printf("\n");
}
