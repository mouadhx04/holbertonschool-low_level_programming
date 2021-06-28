#include "holberton.h"
/**
 *_puts - prints a string
 *@str: is a pointer to char
 *Return: 0 (Success)
 */
void _puts(char *str)
{
	while (*str++)
		_putchar(str);
	return (0);
}
