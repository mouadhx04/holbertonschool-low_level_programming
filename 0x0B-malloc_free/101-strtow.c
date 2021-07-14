#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - splits strings into to words.
 * @str: string to split
 * Return: pointer to an array of words or NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **a;
	int i, j, count, len, k, m;

	count = k = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	if (count == 0)
		return (NULL);
	a = malloc(((count + 1) * sizeof(char *)));
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i] !=  '\0' && k < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, len++;
			a[k] = malloc((len + 1) * sizeof(char));
			if (a[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(a[k]);
				free(a);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				a[k][m] = str[i];
			a[k++][m] = '\0';
		}
	}
	a[k] = NULL;
	return (a);
}
