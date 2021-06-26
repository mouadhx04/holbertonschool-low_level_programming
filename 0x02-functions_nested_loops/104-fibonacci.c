#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1, 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	{
	int x = 0;
	int y = 1;
	int i;
	int s = x + y;
	int fdigit;

	for (i = 3; i < 35; i++)
	{
		x = y;
		y = s;
		s = x + y;
		while ((s / 10) >= 0)
			fdigit = s / 10;
		if ((fdigit == 1) || (fdigits == 2))
			printf("%d", s);
		printf(",");
		printf(" ");
	}
	printf("\n");
	return (0);
}
