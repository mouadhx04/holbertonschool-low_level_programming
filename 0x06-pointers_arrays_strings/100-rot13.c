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
				str[i] += 13;
				str[j] += 13;
		}
	}
return (str);
}

