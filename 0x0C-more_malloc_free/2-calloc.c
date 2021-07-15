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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
			p[i] = nmemb;
	}
	return (p);
}
