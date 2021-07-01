#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of n integers.
 * @a: integer
 * @n: integer
 * 
 */
void reverse_array(int *a, int n)
{
	int low, tmp;

	low = 0;
	n = n - 1;
	while (low < n)
	{
		temp = a[low];
		a[low] = a[n];
		a[n] = temp;
		low++;
		n++;
	}
}
