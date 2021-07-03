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
	int x = 13;

	if (str[i] != '\0')
	{
		for (i >= 97; i <= 122; i++)
		{
			for (j >= 65; j <= 90; j++)
				str[i] = str[i] + x;
				str[j] = str[j] + x;
		}
	}
return (str);
}

