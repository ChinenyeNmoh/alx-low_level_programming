#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = n ^ m, count = 0;

	while (flip > 0)
	{
		count += (flip & 1);
		flip >>= 1;
	}
	return (count);
}
