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
	unsigned int count = 0;
	unsigned long int flip = n ^ m;

	while (flip > 0)
	{
		if (flip & 1)
			count++;
		flip = flip >> 1;
	}
	return (count);
}
