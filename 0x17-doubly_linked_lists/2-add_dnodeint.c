#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to a struct of type dlistint_t
 * @n: n value of new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (!*head)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
