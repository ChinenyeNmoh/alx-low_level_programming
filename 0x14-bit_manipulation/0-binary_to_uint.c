#include "main.h"
#include <stddef.h>


/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int add = 0, power = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (i = 0; b[i] != '\0' ; i++)
	{
		add <<= power;
		if (b[i] & power)
			add += power;
	}
	return (add);
}
