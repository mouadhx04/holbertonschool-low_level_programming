#include "holberton.h"
int _strlen(char *s);
/**
 *puts_half - prints second half of a string
 *@str: is a pointer to char and the parameter
 *
 */
void puts_half(char *str)
{
	int i;
	int x = _strlen(str);

	if (len % 2 == 0)
	{
		for (c = len / 2; c < len; c++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
	for (i = (x / 2) + 1; i < x; i++)
		_putchar(str[i]);
	_putchar ('\n');
	}
}

#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *@s: is a pointer to char
 *Return: len (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
