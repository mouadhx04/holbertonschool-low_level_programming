#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the addition of the arguments
 * @argc: The number of command line arguments in argv array
 * @argv: An array containing the program command line arguments
 * Return: 1 error 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, j, x, add = 0;

	if (argc == 0)
		printf("0\n");

	else if (argc > 0)
	{
		for (x = 1; x < argc; x++)
		{
			for (j = 0; j < argc; j++)
			{
				if (argv[x][j] < '0' || argv[x][j] > '9')
					printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		for (n = 1; n < argc; n++)
		{
			add += atoi(argv[n]);
		}
		printf("%d\n", add);
		return (0);
	}
}
