#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: integer or 1 or 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, cents;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	if (atoi(argv[i]) < 0)
	{
		printf("0\n");
	}
	else if (atoi(argv[i]) >= 25)
	{
		cents = (atoi(argv[i]) / 25) + (atoi(argv[i]) % 25);
		printf("%d\n", cents);
	}
	else if (atoi(argv[i]) >= 10)
	{
		cents = (atoi(argv[i]) / 10) + (atoi(argv[i]) % 10);
		printf("%d\n", cents);
	}
	return (0);
}
