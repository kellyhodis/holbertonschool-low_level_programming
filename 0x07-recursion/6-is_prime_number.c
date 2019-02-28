#include "holberton.h"
/**
* _prime - checks to see if number is prime
* @n: number to check
* @d: testing values
*
* Return: 1 if prime, 0 if not
*/
int _prime(int n, int d)
{
	if (d == 1)
		return (1);
	else if (n % d != 0)
		return (_prime(n, d - 1));
	return (0);
}
/**
* is_prime_number - returns false or positive
* @n: number to test
*
* Return: test value of _prime()
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, n - 1));
}
