#include "holberton.h"
/**
 *_strcat - concatenates two strings
 *@dest: char pointer
 *@src: char pointer
 *Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	char a = *dest;
	char b = *src;
	while (*dest)
		a++;
	while (*src)
	{
		*dest = *src;
		b++;
		a++;
	}
	*dest = '\0';
	return (*dest);
}
