#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct tupe dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		putchar('\0');
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
