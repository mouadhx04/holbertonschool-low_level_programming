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
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
