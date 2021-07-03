#include "holberton.h"
/**
 *print_number - prints an integer
 *@n: integer to be printed
 *
 */
void print_number(int n)
{
	if (n < 0)
		n == -n;
	while ((n / 10) >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
}
