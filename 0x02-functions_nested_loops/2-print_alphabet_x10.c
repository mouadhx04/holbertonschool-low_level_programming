#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i < 56)
	_putchar(i);
	_putchar('\n');
        }
}
