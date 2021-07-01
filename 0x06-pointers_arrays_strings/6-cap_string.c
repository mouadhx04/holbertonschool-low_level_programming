#include "holberton.h"
/**
 * *cap_string - uppercase the string
 *@str:string
 *Return:str;
 */
char *cap_string(char *str)
{
	int i, j;
	char ch[] = {',', '\t', '\n', ' ', ';', '.',
				 '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[0] = str[0] - 32;
			}
