#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int i;
	int s = x + y;

	for (i = 3; i < 54; ++i)
	{
		printf("%d", s);
		printf(",");
		printf(" ");
		x = y;
		y = s;
		s = x + y;
	}
	printf("\n");
	return (0);
}
