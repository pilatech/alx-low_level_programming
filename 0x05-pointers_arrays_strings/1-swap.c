#include "main.h"

/**
 * swap_int - swaps two integers
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
