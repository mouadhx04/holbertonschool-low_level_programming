#include "holberton.h"

/**
* _pow_recursion - returns the value of x raised to the power of y.
*
* @x: integer to be printed with power y
* @y: integer power
*Return: integer or 0 (Success)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x * y);
	}
	else
		return _pow_recursion(x * (y - 1));
}
