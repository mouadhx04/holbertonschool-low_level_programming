#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i, j;
for (j = 48; j < 58; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
