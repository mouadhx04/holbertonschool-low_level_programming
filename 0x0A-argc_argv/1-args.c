#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: The number of command line arguments in argv array
 * @argv: An array containing the program command line arguments
 * Return: 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
