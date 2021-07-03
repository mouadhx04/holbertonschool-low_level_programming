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

	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p',
	'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E',
	'F', 'G', 'H',
	'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z'};
	char rot13x[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z', 'a', 'b', 'c', 'd',
	'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R',
	'S', 'T', 'U', 'V',
	'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
	'L', 'M'};

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (str[i] == alpha[j])
				str[i] = rot13x[j];
	return (str);
}
