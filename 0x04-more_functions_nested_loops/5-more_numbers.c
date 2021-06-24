#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
	for (i = 0; i <= 10; i++)
	{
		for (i >= '0'; i <= '14'; i++)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
	return (0);
}
