#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 0;
	long int y = 1;
	int i;
	long int s = x + y;

	for (i = 3; i < 53; ++i)
	{
		printf("%ld", s);
		x = y;
		y = s;
		s = x + y;
		if (i < 52)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
