#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of n integers.
 * @a: integer
 * @n: integer
 * 
 */
void reverse_array(int *a, int n)
{
	int low, high, tmp;

	for (int low = 0, high = n - 1; low < high; low++, high--)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
	}
}
