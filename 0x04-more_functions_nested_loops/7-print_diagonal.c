#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line with \.
 * @n: The number of \ charactes
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
