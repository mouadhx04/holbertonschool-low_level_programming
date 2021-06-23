#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * Return: 0 (success)
 */
void times_table(void)
{
int i;
int x;

for (i = '0'; i <= '9'; i++)
{
	for (x = '0'; x <= '9'; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('\n');
	if ((i * x) <= 81)
	{
		_putchar((i * x) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}

}
}
}
