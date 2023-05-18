#include "lists.h"
#include <stdlib.h>

/**
 * create_node - creates a new DLL node with data
 * @n: data to add to node
 *
 * Return: pointer to newly allocated/populated node
 */
dlistint_t *create_node(const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;

	return (newnode);
}

/**
 * insert_dnodeint_at_index - inserts a node at position
 * in a doubly linked list
 * @h: double pointer to the head, so we can modify if needed
 * @idx: index to insert new node at
 * @n: data to add to new node
 *
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL, *tmp = NULL;
	unsigned int i = 0;

	newnode = create_node(n);
	if (*h == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
	}
	else
	{
		tmp = *h;
		while (i < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->prev = tmp;
		newnode->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = newnode;
		tmp->next = newnode;
	}
	return (newnode);
}
