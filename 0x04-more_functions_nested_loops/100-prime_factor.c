#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n;

	for (i = 0; i < (n / 2); i++)
	{
		if ((n % i) == 0)
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
