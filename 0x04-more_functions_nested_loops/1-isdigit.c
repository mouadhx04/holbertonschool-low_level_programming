#include "holberton.h"
/**
 * _isdigit - checks for a digit
 *@c: The character to check
 *
 * Return: 1 (success), 0 (otherwize)
 */
int _isdigit(int c);
{
	if (c > '0' && c < '9')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
