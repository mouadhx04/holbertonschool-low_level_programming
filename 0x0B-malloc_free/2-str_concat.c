#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two string
 * @s1: string destination for the concatenation
 * @s2: string source for the concatenation
 * Return: 1 or 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, c, d;
	char *k;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	k = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
	for (c = 0; s1[c]; c++)
	{
		c++;
	}
	for (d = 0; s2[d]; d++)
	{
		s1[c] = s2[d];
		d++;
		c++;
	}
	for (i = 0; s1[i]; i++)
		k[i] = s1[i];
	}
	return (k);
}
