#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1, 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int i;
	int s = x + y;

	for (i = 3; i < 98; i++)
	{
		printf("%d", s);
		x = y;
		y = s;
		s = x + y;
		if (i < 97)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
