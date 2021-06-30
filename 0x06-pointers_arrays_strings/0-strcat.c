#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *@s: is a pointer to char
 *Return: len (Success)
 */
char *_strcat(char *dest, char *src)
{
	while(*dest)
		dest++;
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (*dest);
}
