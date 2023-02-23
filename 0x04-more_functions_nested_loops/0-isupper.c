#include "main.h"
/**
 * _isupper - check for uppercase character
 *
 * @c: variable
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
