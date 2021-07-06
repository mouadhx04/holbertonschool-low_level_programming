#include "holberton.h"
int _strlen(char *s);
/**
 *set_string - sets the value of a pointer to a char
 *@s: is a poiner to pointer type char
 *@to: is a pointer to char
 */
void set_string(char **s, char *to)
{
	int i, j, len;
	char x;

	len = _strlen(**s);
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j <= len; j++)
			x = s[i];
		to[j] = x;
	}
	to[j] = '\0';
}
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

