#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of n integers.
 * @a: integer
 * @n: integer
 * 
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
		i++;
		n--;
	}
}
