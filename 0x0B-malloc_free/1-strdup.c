#include "holberton.h"
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
	char *k;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 1;
		while (*str++)
		{
			len++;
		}

	k = malloc(len * sizeof(char));
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			k[i] = str[i];
		}
		k[len] = '\0';
		free(k);
	}
	return (k);
}
