#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@x: variable to use it in counting
 *
 * Return: nothing
 */
void print_to_98(int x)
{
	while (x != 98)
	{
		printf("%i, ", x);
		if (x > 98)
			x--;
		else
			x++;
	}
	printf("98\n");
}
