#include "holberton.h"
#include <stdio.h>
/**
 * void print_to_98 - prints all natural numbers from n to 98
 *
 *
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
