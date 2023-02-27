#include "main.h"

/**
 * reset_to_98 - function to reset a value using pointer
 * @n: pointer storing variable of data type int
 * Return:0
 */
void reset_to_98(int *n)
{
	int a;
	int *n = &a;
	*n = 98;
}
