#include "search_algos.h"
/**
 * linear_search - implement linear search algorithm
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: index of the found item or -1 if not found
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
