#include "holberton.h"
/**
 * print_number - prints an integer
 *
 *
 * Return: 0 (success)
 */
void print_number(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

