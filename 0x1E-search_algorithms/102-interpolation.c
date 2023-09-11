#include "search_algos.h"
/**
 * interpolation_search - Write a function that searches
 * for a value in a sorted array of integers using
 * the interpolation search algorithm
 * @array:  is a pointer to the first element of the
 * array to search in
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: the index of the found value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		mid = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (mid < size)
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
