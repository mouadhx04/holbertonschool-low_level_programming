#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which
 * the cmp function * does not return 0
 * @array: pointer to an array
 * @size: array size
 * @cmp: pointer to function that compare values
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
