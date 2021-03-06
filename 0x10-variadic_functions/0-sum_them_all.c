#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums  all the parameters of a function.
 * @n: const unsigned int.
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;

	va_list(ap);
	va_start(ap, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
