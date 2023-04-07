#include "main.h"

/**
 * print_binary - Prints the binary representation.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n > 1)
		print_binary(n >> mask);

	_putchar((n & mask) + '0');
}
