#include "holberton.h"
char *_strchr(char *s, char c);
/**
* _strspn - function that gets the length of a prefix substring
*
* @s: The null-terminated string to be scanned.
* @accept: The null-terminated string containing the characters to match.
*
* Return: n (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s && _strchr(accept, *s++))
	{
		n++;
	}
	return (n);
}
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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
