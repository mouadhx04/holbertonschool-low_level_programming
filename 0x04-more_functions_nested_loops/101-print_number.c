#include "holberton.h"
/**
 * print_number - prints an integer
 *
 *
 * Return: 0 (success)
 */
void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
