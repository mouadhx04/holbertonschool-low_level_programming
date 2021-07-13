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
	unsigned int i, c, d, len = 0;
	char *k;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(s1) + strlen(s2);

	k = malloc((len + 1) * sizeof(char));
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
	c = 0;
	while (s1[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (s2[d] != '\0')
	{
		s1[c] = s2[d];
		d++;
		c++;
	}
	for (i = 0; i <= size; i++)
		k[i] = s1[c];
	}
	return (k);
}
