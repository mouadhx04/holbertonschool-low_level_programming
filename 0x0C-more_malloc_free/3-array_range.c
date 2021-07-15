#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that allocate memory for an array.
 * @min: Minimum to start.
 * @max: Maximum to start.
 * Return: Pointer to the array or NULL.
 */
int *array_range(int min, int max)
{
	int s;
	int i;
	int *p;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		*(p + i) = min;
		min++;
	}

	return (p);
}
