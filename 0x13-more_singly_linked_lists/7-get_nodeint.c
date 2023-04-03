#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the desired node,
 *         or NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp;

tmp = head;
while (i < index)
{
	if (head == NULL)
		return (NULL);
	tmp = tmp->next;
	i++;
}
return (tmp);
}
