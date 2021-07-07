#include "holberton.h"
/**
 * is_prime_number - check is the number prime or not
 * @n: the given number
 *
 * Return: 1 or 0 (Success)
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if ((n % 2) == 0)
		return (0);
	else
		return (1);
}
