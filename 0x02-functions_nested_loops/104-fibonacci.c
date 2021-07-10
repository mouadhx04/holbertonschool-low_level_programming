#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1, 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 0;
	long int y = 1;
	int i;
	long int s = x + y;

	for (i = 0; i < 98; i++)
	{
		printf("%ld", s);
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
