#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: integer
 * @index: position of bit to be set.
 *
 * Return: -1 if error or 1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, set;

	size = (sizeof(unsigned long int) * 8);
	if (index >= size)
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
