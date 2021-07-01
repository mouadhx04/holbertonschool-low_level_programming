#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	if (*str1 == '\0' && *str2 == '\0')
		return (0);
	else
		return (-1);
}
