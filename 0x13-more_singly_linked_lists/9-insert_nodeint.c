#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp, *newnode;

	if (*head == NULL)
		return (NULL);
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

		tmp = *head;
	if (idx == 0)
	{
		newnode->next = tmp;
		*head = newnode;
		return (newnode);
	}
	while (i < idx - 1)
	{
		if (tmp != NULL)
		tmp = tmp->next;
		i++;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
}

