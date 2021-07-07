#include "holberton.h"

/**
* _print_rev_recursion - prints a string in reverse
*
* @s: string to be printed in reverse
*
*/
void _puts_recursion(char *s)
{
	s--;
	if (*s == 0)
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
