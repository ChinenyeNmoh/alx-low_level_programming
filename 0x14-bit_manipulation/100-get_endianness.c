#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big-endian and i If little-endian.
 */
int get_endianness(void)
{
	int x = 1;
	char *pt = (char *) &x;

	return ((int)*pt);
}

