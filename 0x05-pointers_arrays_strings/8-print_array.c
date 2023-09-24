#include "main.h"
#include <stdio.h>

/**
 * print_array-print arrays
 * @a: the array.
 * @n: number of elements array has.
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (a)
	{
		while (i < n)
		{
			printf("%d", a[i]);
			if (i < (n - 1))
				printf(", ");
			i++;
		}
	}
	printf("\n");
}
