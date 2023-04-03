#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head of linked list
 * Return: node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	nextnode = *head;
	prevnode = NULL;

	while ((*head) != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
