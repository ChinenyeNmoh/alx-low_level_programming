#include "lists.h"
/**
 * find_listint_loop - finds the loop contained
 *                     in a linked list
 * @head : pointer to the head of the linked list
 * Return: pointer the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *link1, *link2;

if (head == NULL || head->next == NULL)
return (NULL);

link1 = head->next;
link2 = (head->next)->next;

while (link2)
{
if (link1 == link2)
{
link1 = head;

while (link1 != link2)
{
link1 = link1->next;
link2 = link2->next;
}

return (link1);
}

link1 = link1->next;
link2 = (link2->next)->next;
}

return (NULL);
}
