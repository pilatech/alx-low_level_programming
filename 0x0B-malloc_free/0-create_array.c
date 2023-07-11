#include <stdlib.h>

/**
 * create_array - create an array of characters.
 *
 * @size: size of the array.
 * @c: the initial content.
 *
 * Return: an array on succes and NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

