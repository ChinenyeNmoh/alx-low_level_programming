#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: position to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;

	size = (sizeof(unsigned long int) * 8);
	if (index >= size)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
