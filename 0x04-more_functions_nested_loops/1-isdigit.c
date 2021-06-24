#include "holberton.h"
/**
 * _isdigit - checks for a digit
 *@c: The character to check
 *
 * Return: 1 (success), 0 (otherwize)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
