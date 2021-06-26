#include <stdio.h>
/**
 * main - prints sum even terms for first 32 Fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int i;
	int s = x + y;
	int sum;

	for (i = 3; i < 32; i++)
	{
		x = y;
		y = s;
		s = x + y;
		if ((s % 2) == 0)
			sum = sum + s;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
