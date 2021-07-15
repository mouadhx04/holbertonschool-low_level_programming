#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * Return: Pointer to the array or NULL if fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(s + i) = 0;

	return ((void *) s);
}
