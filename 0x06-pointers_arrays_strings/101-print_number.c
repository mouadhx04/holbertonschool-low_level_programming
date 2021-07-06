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
	else if (n / 10)
	{
		print_number(n / 10);
	_putchar((n % 10) + '0');
	}
	else
		_putchar('0');
}
