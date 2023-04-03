#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	if (h != NULL)
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			count++;
			tmp = tmp->next;
		}
	return (count);
}
