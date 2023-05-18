#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of doubly linked list (DLL)
 *
 * Return: number of nodes in DLL
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
