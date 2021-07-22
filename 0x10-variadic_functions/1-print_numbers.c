#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with seaparator
 * @n: const unsigned int.
 * @separator: between numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, const unsigned int));
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
