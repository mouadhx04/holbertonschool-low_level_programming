#include "holberton.h"
/**
 * reset_to_98 - create an int pointer with value 98 
 *@x: variabla to be used
 * 
 */
void reset_to_98(int *n)
{
	int x;

	x = 98;
	n = &x;
}
