#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
*
* @s: string to bescanned for get the length
*Return: integer or 0 (Success)
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	return (s + (_strlen_recursion(s + 1)));
	
}
