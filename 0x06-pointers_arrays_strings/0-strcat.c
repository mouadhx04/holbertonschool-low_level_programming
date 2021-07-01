#include "holberton.h"
/**
 *_strcat - concatenates two strings
 *@dest: char pointer
 *@src: char pointer
 *Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (*dest);
}
