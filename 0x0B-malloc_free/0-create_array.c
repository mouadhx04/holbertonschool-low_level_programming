#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of memory allocation
 * @c: char in array
 * Return: integer or 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (0);

	p  = malloc(size * sizeof(char));
	printf("%s\n", p);
}
