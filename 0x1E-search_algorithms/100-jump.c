#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL || size == 0)
		return (-1);

	end = sqrt(size);
	for (i = start = 0; start < size && array[start] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		i = start;
		start += end;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, start);

	start = start < size - 1 ? start : size - 1;
	for (; i < start && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
