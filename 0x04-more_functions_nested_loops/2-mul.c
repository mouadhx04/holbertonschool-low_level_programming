#include "holberton.h"
/**
 * mul - multiplies two integers
 *@a: The character to multiplie
 *@b: the character to multilpie
 * Return: 0 (success)
 */
int mul(int a, int b)
{
	if (a != '0' && b != '0')
	{
		_putchar((a * b) + '0');
	}
	return (0);
}
