#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: parameter
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1 + '0');
	}
	else
	{
		return (0 + '0');
	}
}
