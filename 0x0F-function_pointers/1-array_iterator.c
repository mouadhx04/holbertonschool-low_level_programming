#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a array elements and in hexa format
 * @array: pointer to an array
 * @size: array size
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
