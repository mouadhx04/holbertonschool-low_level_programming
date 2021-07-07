#include "holberton.h"
/**
 * _sqrt - calculates the square root of a number
 * @nb: the given number
 * @count: the counter
 *
 * Return: the square root integer
 */
int _sqrt(int nb, int count)
{
	if (nb < 0)
		return (-1);
	if (count > nb)
		return (-1);
	if (count * count == nb)
		return (count);
	return (_sqrt(nb, count + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @nb: the given number
 *
 * Return: the square root integer
 */
int _sqrt_recursion(int nb)
{
	return (_sqrt(nb, 1));
}
