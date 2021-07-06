#include "holberton.h"
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
		_putchar('0');

	else ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
