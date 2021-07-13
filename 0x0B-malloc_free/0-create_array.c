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
char *create_array(unsigned int size, char c)
{
	char *p = &c;

	if (size == 0)
		return (0);

	p = (char *)malloc(size * sizeof(char));

	printf("%s", p);
	return (p);
}
