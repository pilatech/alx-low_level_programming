#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
int n = 48;
while (n < 58)
{
if ((n == 50) || (n == 52))
	continue;
else
	_putchar(n);
n++;
}
_putchar(10);
}
