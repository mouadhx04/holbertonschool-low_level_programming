#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: is a pointer to char
 *
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char x;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		x = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = x;
	}
}
