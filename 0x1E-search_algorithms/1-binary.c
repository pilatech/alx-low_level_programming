#include "search_algos.h"

/**
 * binary_search - implements binary search algorithm
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index of the found item or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
