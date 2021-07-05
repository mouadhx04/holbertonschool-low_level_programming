#include "holberton.h"
/**
* _strpbrk - function that locates the first character in a string
*
* @s: string to be scaned
* @accept: the character to be searched in s
*
* Return: A pointer to the first occuence of the character
* or NULL if the character not found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	pos = i;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (s + pos);
	}
	else
	{
		return ('\0');
	}
}
