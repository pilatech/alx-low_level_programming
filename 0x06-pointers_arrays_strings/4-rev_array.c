#include "main.h"
/**
 * reverse_array - reverse an array of integers.
 * @a: the array of integers.
 * @n: number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, j, half, temp;

	half = n / 2;
	i = 0;
	j = n - 1;
	while (i < half)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}

}
