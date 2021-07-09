#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: The number of command line arguments in argv array
 * @argv: An array containing the program command line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
