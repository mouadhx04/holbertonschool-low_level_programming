#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: int to check
 *
 * Return: n % 10 (Success)
 */
int print_last_digit(int n)
{
	_putchar(n % '10');
                return (n % 10);
}
