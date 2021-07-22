#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all - 0
*@format: format of argument
*
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, len = 0;
	char *s, *sep;
	va_list ap;

	while (format[len] != '\0')
		len++;
	va_start(ap, format);
	while (i < len)
	{
		sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int),  sep);
				break;
			case 'i':
				printf("%i%s", va_arg(ap, int),  sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double),  sep);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if (i != (len - 1) && sep != NULL)
			printf("%s", sep);
		i++;
	}
	printf("\n");
	va_end(ap);
}
