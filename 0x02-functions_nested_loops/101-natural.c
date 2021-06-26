#include <stdio.h>
/**
 * main - prints sum of multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			x = x + i;
	}
	printf("%d\n", x);
	printf("\n");
	return (0);
}
