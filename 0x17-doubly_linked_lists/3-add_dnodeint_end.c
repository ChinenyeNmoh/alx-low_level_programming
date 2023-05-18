#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a node to the end of a doubly linked
 * list
 * @head: double pointer to the head, so we can modify if needed
 * @n: data to add to new node
 *
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *tmp = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	tmp = *head;

	if (*head == NULL)
		*head = tmp = newnode;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
		newnode->prev = tmp;
		tmp = newnode;
	}
	return (newnode);
}
