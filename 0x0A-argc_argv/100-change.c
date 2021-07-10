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
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else if (atoi(argv[1]) >= 25)
	{
		cents = (atoi(argv[1]) / 25) + (atoi(argv[1]) % 25);
		printf("%d\n", cents);
	}
	else if (atoi(argv[1]) >= 10)
	{
		cents = (atoi(argv[1]) / 10) + (atoi(argv[1]) % 10);
		printf("%d\n", cents);
	}
	return (0);
}
