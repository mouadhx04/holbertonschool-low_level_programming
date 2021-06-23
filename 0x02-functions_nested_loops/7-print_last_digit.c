#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: int to check
 *
 * Return: n % 10 (Success)
 */
int print_last_digit(int n)
{
if (n < 0)
{
i = (-1 * (n % 10));
_putchar(i + '0');
return (i);
}
else
{
_putchar(i + '0');
return(i);
}
}
