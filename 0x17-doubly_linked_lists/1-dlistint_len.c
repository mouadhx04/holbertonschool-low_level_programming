#include "lists.h"

/**
 * dlistint_len - returns the number of elements.
 * @h: a pointer.
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		a = a + 1;
		h = h->next;
	}
	return (a);
}
