#include "holberton.h"
/**
* _strchr - function that locates a character in a string
*
* @s: string to be scaned
* @c: the character to be searched in s
*
* Return: A pointer to the first occuence of the character
* or NULL if the character not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != c)
	{
		s++;
		i++;
	}
	if (*s == c)
		return (s + i);
	else
		return (0);
}
