#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars.
*/
char *_strdup(char *str)
{
	char *c;
	int size = 0, i;

	if (str == NULL)
		return (0);
	while (str[size] != '\0')
		size++;
	c = (char *)malloc(size + 1 * sizeof(char));
	if (c == NULL)
		return ('\0');
	for (i = 0; c[i] < size; i++)
	{
		c[i] = str[i];
	}
	c[i] = '\0';
	return (c);
