#include "holberton.h"

/**
* _puts_recursion - prints a string
*
* @s: string to be printed
*
*/
void _puts_recursion(char *s)
{
	int i;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
	}
	_putchar('\0');
}
