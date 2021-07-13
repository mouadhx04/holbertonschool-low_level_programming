#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of memory allocation
 * @c: char in array
 * Return: 1 or 0 (Success)
 */
char *create_array(unsigned int size, __attribute__((unused)) char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (0);

	p  = malloc(size * sizeof(char));
	for (i = 0; i <= size; ++i)
	printf("%d\n", p[i]);
	return (p);
}
