#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 *@c: The character to check
 *
 * Return: 1 (success), 0 (otherwize)
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
