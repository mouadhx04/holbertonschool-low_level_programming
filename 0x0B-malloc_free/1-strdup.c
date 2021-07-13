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
	unsigned int i, j, len = 0;
	char *p;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		while (*str++)
			len++;
	}

	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			continue;
		}
		j = 0;
		while (j <= i)
		{
			p[j] = str[j];
			j++;
		}
		free(p);
	}
	return (p);
}
