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
	int i, add = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	else if (isdigit(argc) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		add += atoi(argv[i]);
		}
		printf("%d\n", add);
		return (0);
	}
}

