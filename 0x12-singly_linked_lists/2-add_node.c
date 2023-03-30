#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newstr;
	size_t len = 0;

	newstr = malloc(sizeof(list_t));
	if (newstr == NULL)
		return (NULL);
	newstr->str = strdup(str);
	while (str[len] != '\0')
	{
		len++;
	}
	newstr->len = len;
	newstr->next = *head;
	*head = newstr;
	return (newstr);
}
