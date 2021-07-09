#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

int _atoi(char *s);
/**
 * main - print the name of the program
 * @argc: The number of command line arguments in argv array
 * @argv: An array containing the program command line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	mul = mul * _atoi(argv[i]);
	}
	printf("%d\n", mul);
	}
	return (0);
}
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
