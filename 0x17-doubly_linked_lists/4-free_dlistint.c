#include "lists.h"
#include <string.h>

/**
 * free_dlistint - frees a list_t list.
 *@head: pointer.
 *Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
