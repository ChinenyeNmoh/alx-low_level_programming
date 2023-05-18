#include "lists.h"

/**
 * sum_dlistint - sums a doubly linked list
 * @head: pointer to head
 *
 * Return: sum of all elements of the List, 0 if List is NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
