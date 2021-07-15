#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @size: size of memory allocation
 * @nmemb: elements of the array
 * Return: pointer or 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ch;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ch[i] = 0;
		i++;
	}
	return (ch);
}
