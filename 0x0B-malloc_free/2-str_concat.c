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
	unsigned int i, j, len;
	char *k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len1++;
	}
	for (i = 0; s2[i]; i++)
	{
		len2++;
	}
	len3 = len1 + len2;

	k = malloc(sizeof(char) * (len3 + 1));
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; s1[i]; i++)
		k[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		k[j++] = s2[i];
	}
	return (k);
}

