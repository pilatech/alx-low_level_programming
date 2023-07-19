#include <stddef.h>

/**
 * array_iterator - function that executes a function on each element of array.
 * @array: pointer to the first element of the array.
 * @size: the length of the array.
 * @action: the function to run for every item.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
