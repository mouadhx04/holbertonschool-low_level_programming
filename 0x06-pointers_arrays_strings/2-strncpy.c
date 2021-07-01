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
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		continue;
	}
	j = 0;
	while (j <= i && j < n)
	{
		dest[j] = src[j];
		j++;
	}
}
