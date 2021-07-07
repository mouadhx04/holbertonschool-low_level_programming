#include "holberton.h"
int _strlen(char *s);
/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: variable to be checked
 *Return: 1 or 0 (Success)
 */
int is_palindrome(char *s)
{
	if (*s++  == _strlen(*s--))
		return (1);
	else
		return (0);
}
/**
 *_strlen - returns the length of a string
 *@s: is a pointer to char
 *Return: len (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
