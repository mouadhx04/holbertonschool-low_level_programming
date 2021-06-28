#include "holberton.h"
/**
 *_puts - prints a string
 *@str: is a pointer to char
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar ('\n');
}
