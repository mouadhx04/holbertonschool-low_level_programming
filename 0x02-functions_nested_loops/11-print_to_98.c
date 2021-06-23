#include "holberton.h"
#include <stdio.h>
/**
 * void print_to_98 - prints all natural numbers from n to 98
 *
 *
 * Return: nothing
 */
void print_to_98(int xv)
{
	while (xv != 98)
	{
		printf("%i, ", xv);
		if (xv > 98)
			xv--;
		else
			xv++;
	}
	printf("98\n");
}
