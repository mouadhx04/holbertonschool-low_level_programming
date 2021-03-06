#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n from s2 source to s1 dest
 * @s1: string destination for the concatenation
 * @s2: string source for the concatenation
 * @n: number of bytes taked from s2 to s1
 * Return: pointer or 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, i1, j1, x = 0;
	char *k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;

	k = malloc(sizeof(char) * (i + n + 1));
	if (k == NULL)
	{
		return (NULL);
	}
	for (i1 = 0; s1[i1]; i1++)
		k[x++] = s1[i1];
	for (j1 = i1; j1 < i1 + n; j1++)
		k[x++] = s2[j1 - i1];
	k[x] = '\0';
	return (k);
}
