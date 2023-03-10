#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 *@s: char to check
 * Return: Length.
 */
int _strlen(char *s)
{

	int i = 0;

	for (; *s++;)
		i++;

	return (i);
}

