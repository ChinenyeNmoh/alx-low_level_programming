#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
