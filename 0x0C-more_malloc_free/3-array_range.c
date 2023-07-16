#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: value to start at.
 * @max: value to end at (excuded)
 *
 * Return: pointer to the created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int start;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (start = min, i = 0; start <= max; start++, i++)
	{
		arr[i] = start;
	}
	return (arr);
}
