#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
/**
* struct op - holds character to match and function pointer
* @s: character to match
* @f: function pointer
*/
typedef struct op
{
	char s;
	void (*f)(va_list list);
} type;

int _putchar(char *c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_c(va_list list);
void print_numf(va_list list);
void print_string(va_list list);
void print_numi(va_list list);

#endif /* VARIADIC_H */
