#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: The character to check
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
if (c < 'z' && c > 'a')
	return (1);
else if (c < 'Z' && c > 'A')
	return (1);
else
	return (0);
}
