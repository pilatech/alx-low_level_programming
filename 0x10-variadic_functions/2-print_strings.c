#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print delimited strings.
 * @seperator: the delimiting string.
 * @n: the number of strings.
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *val;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, char *);
		if (val)
			printf("%s", val);
		else
			printf("%s", "(nil)");
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
