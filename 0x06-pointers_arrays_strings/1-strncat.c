#include "holberton.h"
/**
 *_strcat - concatenates two strings
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
	for (d = 0; d <= (n - 1); d++)
	{
		dest[c] = src[d];
	}
	dest[c] = '\0';
	return (dest);
}
