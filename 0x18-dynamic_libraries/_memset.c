#include "main.h"

/**
*_memset - A function that fills memory with a constant byte
*@s: is a ponter
*@n: memory size
*@b: variable const
*Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)

	{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
