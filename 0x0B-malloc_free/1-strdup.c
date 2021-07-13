#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: 1 or 0 (Success)
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *p;

	if (str == 0)
		return (0);

	p = (char *)malloc(sizeof(char));
	if (p == NULL)
	{
		return (0);
	}
	else
	{
		p = strdup(str);
		free(p);
	}
	return (p);
}
