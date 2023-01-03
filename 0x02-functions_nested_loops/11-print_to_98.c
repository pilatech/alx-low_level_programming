#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers upto 98
 * @n: starting number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
while (n < 99)
{
if (n == 98)
	printf("%d\n", n);
else
	printf("%d, ", n);
n++;
}
while (n > 97)
{
if (n == 98)
	printf("%d\n", n);
else
	printf("%d, ", n);
n--;
}
}
