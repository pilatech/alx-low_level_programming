#include "main.h"

/**
 * print_line - print a line
 * @n: number of times
 *
 * Return: nothing
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar(10);
}
else
{
int i = 0;
while (i < n)
{
_putchar(95);
i++;
}
_putchar(10);
}
}
