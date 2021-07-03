#include "holberton.h"
/**
 *print_number - prints an integer
 *@n: integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		_putchar((x / 10) + '0');
	_putchar((x % 10) + '0');
}
