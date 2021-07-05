#include "holberton.h"
int _strlen(char *s);
/**
 * _strstr - function that locates a substring
 *@*haystack: pointer on a string
 *@*needle: pointer on a substring
 *
 * Return: 1 (success), 0 (otherwize)
 */
char *_strstr(char *haystack, char *needle)
{
	int currentMatch = 0;

	size_t hay_len = _strlen(haystack);
	size_t nee_len = _strlen(needle);
	for(int i = 0;i<hay_len;i++)
	{
		if(haystack[i] == needle[currentMatch])
		{
			if(++currentMatch == nee_len) return i - currentMatch;
		}
		else
			currentMatch = 0;
	}
}

#include "holberton.h"
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
