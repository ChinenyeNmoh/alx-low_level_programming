#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *nextnode;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tmp);
	return (1);
	}

	while (i < index - 1)
	{
	if (tmp->next == NULL)
	{
		return (-1);
	}
		tmp = tmp->next;
		i++;
	}
	nextnode = tmp->next;
	tmp->next = nextnode->next;
	free(nextnode);
	return (1);
}

