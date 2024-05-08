#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - implements linear search algorithm.
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search
 * Return: Index of the found value, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
