#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings with separators
 * @n: number ef elements
 * @separator: between numbers
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list(ap);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
