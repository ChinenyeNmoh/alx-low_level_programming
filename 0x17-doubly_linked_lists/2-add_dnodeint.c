#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a node to the head of a doubly linked list
 * @head: double pointer to the head, so we can modify if needed
 * @n: data to add to new node
 *
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *tmp = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	tmp = *head;
	if (tmp != NULL)
		tmp->prev = newnode;

	*head = newnode;

	return (newnode);
}
