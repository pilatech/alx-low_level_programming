#include "main.h"
/**
 * _sqrt_recursion - calculate square root
 * @n: the number to calculate squaroot of
 *
 * Return: the square root.
 * 
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return 1 + _sqrt_recursion(n - (n - 1) - 2);
}
