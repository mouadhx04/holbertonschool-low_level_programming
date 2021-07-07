#include "holberton.h"

/**
* factorial - returns the factorial of a given number
*
* @n: string to bescanned for getting his factorial
*Return: integer or 0 (Success)
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
