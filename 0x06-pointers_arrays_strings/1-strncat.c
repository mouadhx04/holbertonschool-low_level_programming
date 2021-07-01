#include "holberton.h"
/**
 *_strncat - concatenates n str from src to dest
 *@dest: char pointer
 *@src: char pointer
 *@n: number of bytes from src
 *Return: dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (n--)
	{
		if (!(*dest++ = *s2++))
		{
			return (dest);
		}
	}
	*dest = '\0';
	return (dest);
}
