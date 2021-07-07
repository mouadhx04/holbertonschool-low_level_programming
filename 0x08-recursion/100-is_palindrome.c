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
	return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: variable to be checked
 *Return: 1 or 0 (Success)
 */
int is_palindrome(char *s)
{
	if (*s != _strlen_recursion(s))
		return (0);
	else if (*s == _strlen_recursion(s))
		return (is_palindrome(s - 1));
	else
		return (1);
}
