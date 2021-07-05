#include "holberton.h"
int _strlen(char *s);
/**
 * _strstr - function that locates a substring
 *@haystack: pointer on a string
 *@needle: pointer on a substring
 *
 * Return: a pointer or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
