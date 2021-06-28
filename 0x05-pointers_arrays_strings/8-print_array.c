#include "holberton.h"
/**
 *print_array - prints n elements of an array of integers
 *@n: number of array elements
 *
 */
void print_array(int *a, int n)
{
	int i=0;
	int array[n];

	for(i = 0;i < n; i++)
		printf("%d", array[i]);
	printf(",");
	printf(" ");
}
