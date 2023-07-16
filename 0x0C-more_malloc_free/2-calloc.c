#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(arr + i) = 0;
	}
	return ((void *) arr);
}
