#include "holberton.h"
/**
 * times_table - writes a function that prints prints the 9 times table
 */
void times_table(void)
{
	int r;
	int x;

	for (r = 0; r <= 9; r++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x == 0)
			{
				_putchar(x + '0');
			}
			else if (x * r <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x * r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x * r) / 10 + '0');
				_putchar((x * r) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
