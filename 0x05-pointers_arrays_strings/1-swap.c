#include "main.h"

/**
 * swap - swaps two integers
 * @a: the first number
 * @b: the second number
 */

void swap_int(int *a, int *b)
{
	int val;
	val = *a;
	*a = *b;
	*b = val;
}
