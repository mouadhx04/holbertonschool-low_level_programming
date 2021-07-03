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

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13x[] =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (str[i] == alpha[j])
				str[i] = rot13x[j];
	j = 52;
	return (s);
}
