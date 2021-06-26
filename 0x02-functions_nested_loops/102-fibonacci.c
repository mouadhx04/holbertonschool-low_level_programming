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
	int s;

	for (i = 3; i < 53; i++)
	{
		x = y;
		y = s;
		s = x + y;
		printf("%d", s);
		if (i < 52)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
