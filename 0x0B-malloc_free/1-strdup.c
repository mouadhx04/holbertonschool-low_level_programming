#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: 1 or 0 (Success)
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *p;

	if (str == NULL)
	{
		return (0);
	}
	else
		len = 1;
	{
		while (*str++)
			len++;
	}

	p = malloc(sizeof(char) * (len));
	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			p[i] = str[i];
		}
		p[len] = '\0';
	}
	return (p);
}
