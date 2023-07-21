#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers seperated by a seperator.
 * @seperator: the seperator between strings.
 * @n: number of numbers.
 *
 * Return: Nothing.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int res;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(args, int);
		printf("%d", res);
		if ((seperator) && (i != n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
