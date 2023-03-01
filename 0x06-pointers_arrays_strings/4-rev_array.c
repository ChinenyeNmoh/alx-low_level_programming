#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: The number of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, j, c;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
