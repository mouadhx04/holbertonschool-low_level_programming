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
	int s, i;

	while (s < 50)
	{
		s = x + y;
	}
	for (i = 3; i <= 50; i++)
	{
		x = y;
		y = s;
		s = x + y;
	}
	return (0);
}
