#include "search_algos.h"

/**
 * linear_search - searches fora value in an array
 * @array: A pointer to the first index in an array
 * @size: the nmber of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array or if array
 * is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
