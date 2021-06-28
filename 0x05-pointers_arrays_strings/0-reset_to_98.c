#include "holberton.h"
/**
 * reset_to_98 - create an int pointer with value 98
 *@n: is a pointer
 *
 */
void reset_to_98(int *n)
{
	int x;

	x = 98;
	n = &x;
}
