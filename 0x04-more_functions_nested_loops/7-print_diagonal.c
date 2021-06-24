#include "holberton.h"

/**
 * print_diagonal - Draws a draws a diagonal line using the character \.
 * @n: The number of \ .
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
			if (i == n)
				_putchar('\');
		}
}
