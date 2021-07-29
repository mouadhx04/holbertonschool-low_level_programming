#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node - function that adds a new node at the beginning
* @head: list_t pointer to a structure node
* @str: constant pointer to a string
* Return: the new added node
*/
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int i, len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	s = strdup(str);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		len = i + 1;
	}

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = s;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
