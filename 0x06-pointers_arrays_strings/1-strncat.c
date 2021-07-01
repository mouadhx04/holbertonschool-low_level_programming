  
#include "holberton.h"
/**
 *_strcat - concatenates two strings
 *@dest: char pointer
 *@src: char pointer
 *@n: most bytes from src
 *Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int c, d, n;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] <= n)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
