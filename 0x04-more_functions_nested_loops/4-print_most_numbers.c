#include "holberton.h"
/**
 * print_most_numbers - prints the digits numbers, not print 2 and 4
 *
 *
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	for (i >= '0'; i <= '9'; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
	return (0);
}
