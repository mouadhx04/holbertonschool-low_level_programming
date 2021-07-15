#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates n from s2 source to s1 dest
 * @s1: string destination for the concatenation
 * @s2: string source for the concatenation
 * @n: number of bytes taked from s2 to s1
 * Return: pointer or 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, len = 0, len1 = 0;
	char *k;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		len = strlen(s2);
		n = len;
	}
	for (i = 0; s1[i] || s2[i]; i++)
		len1++;

	k = malloc(sizeof(char) * (len1 + n));
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; s1[i]; i++)
		k[j++] = s1[i];
	for (i = 0; s2[i] && i < len; i++)
		k[j++] = s2[i];
	}
	return (k);
}
