#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the element of the list
 * @h: head of the list
 *
 * Return: the element of the list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;


	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
