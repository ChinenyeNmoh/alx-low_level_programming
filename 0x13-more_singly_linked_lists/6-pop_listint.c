#include "lists.h"

/**
 * pop_listint - function deletes first node
 * in the linked list and sets temp to NULL
 * @head: pointer to nodes
 * Return: returns the data of the initial head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
