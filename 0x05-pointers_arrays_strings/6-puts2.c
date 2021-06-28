#include "holberton.h"
int _strlen(char *s)
/**
 *puts2 - prints every other character of a string
 *@s: is a pointer to char
 *
 */
void puts2(char *str)
{
	int i;
	i
	int x = _strlen(str);

	for (i = 0; i < x; i += 2)
		_putchar(str[i]);
	_putchar ('\n');
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
