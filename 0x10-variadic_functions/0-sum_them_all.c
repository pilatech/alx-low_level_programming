#include <stdarg.h>

/**
 * sum_them_all - add together the arguments.
 * @n: the counter of the arguments.
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	int val;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	val = 0;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		sum = sum + val;
	}
	va_end(args);
	return (sum);
}
