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
	else if (argc < 1)
	{
		printf("Error\n");
	}
	return (0);
}
/**
 * _atoi - convert a string to an integer
 * @s: The integer to be converted
 *
 * Return: The integer value of the converted string
 */
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
