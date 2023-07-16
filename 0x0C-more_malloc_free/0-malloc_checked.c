#include <stdlib.h>

/**
 * malloc_checked - safely allocate memory.
 * @b: size in bytes to allocate.
 *
 * Return: pointer to the allocated address.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
