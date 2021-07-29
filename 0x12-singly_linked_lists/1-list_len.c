#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - function returns the number of elements in a linked list_t list
* @h: list_t pointer to a list node
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++
	}
	return (len);
}
