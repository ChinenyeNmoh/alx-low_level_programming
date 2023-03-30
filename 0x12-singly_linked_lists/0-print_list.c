#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		count++;
		tmp = tmp->next;
	}
	return (count);
}
