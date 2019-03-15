#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sums all parameters
* @n: number of parameters
*
* Return: calculated sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list listva;
	unsigned int sum, i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(listva, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(listva, int);
	}
	va_end(listva);
	return (sum);
}
