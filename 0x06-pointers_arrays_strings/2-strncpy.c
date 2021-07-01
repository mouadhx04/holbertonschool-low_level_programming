#include "holberton.h"
/**
 *_strncpy - copies a string
 *@dest: char pointer
 *@src: char pointer
 *@n: number of bytes from src
 *Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

