#include "holberton.h"
/**
 *rot13 - encodes a string using rot13
 * @str: string used
 *
 * Return: char
 */
char *rot13(char *str)
{
	int i, j;

	if (str[i] != '\0')
	{
		for (i >= 97; i <= 122; i++)
		{
			for (j >= 65; j <= 90; j++)
				str[i] = str[i] + CR;
				str[j] = str[j] + CR;
		}
	}
return (str);
}

