#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: parameter to be checked
 * Return: 1 if successful and 0 if unsuccessful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
