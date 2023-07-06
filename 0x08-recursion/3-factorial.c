#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: the number for which to calculate the factorial
 *
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
