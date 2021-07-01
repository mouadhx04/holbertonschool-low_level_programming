#include "holberton.h"
/**
 *_strncat - concatenates two strings
 *@dest: char pointer
 *@src: char pointer 
 *
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
