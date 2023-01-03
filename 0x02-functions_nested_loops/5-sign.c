#include "main.h"

/**
 * print_sign - prints the sign for a number
 * @n: the number
 *
 * Return: -1, 0 or 1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_puchar(n);
return (n);
}
}
