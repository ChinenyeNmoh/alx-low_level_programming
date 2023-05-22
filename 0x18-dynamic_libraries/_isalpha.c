#include "main.h"

/**
 * _isalpha - function that check if c is letter either lowercase or uppercase
 * @c: unsigned char value to be compared with ASCII values
 * Return: returns 1 if c is lowercase or uppercase otherwise returns 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

}
