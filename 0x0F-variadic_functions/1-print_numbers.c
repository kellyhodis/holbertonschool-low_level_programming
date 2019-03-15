#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers followed by a new line
* @separator: string to print between numbers
* @n: number of integers passed to the function
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listva;
	unsigned int i;

	if (n == 0)
		return;
	va_start(listva, n);
	for (i = 0; i < n; i++)
	{
		if (separator && (i < n - 1))
		{
			printf("%d%s", va_arg(listva, int), separator);
		}
		else
			printf("%d", va_arg(listva, int));
	}
	va_end(listva);
	printf("\n");
}
