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
	int s;

	while (s < 50)
	{
		s = x + y;
	printf("%d", s);
	printf(",");
	printf(" ");
	}
	return (0);
}
