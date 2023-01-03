#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: the string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
char *next = s
while (next != 0)
{
next++
}
next - 1;
while ((s <= next))
{
_putchar(*next);
next--
}
_putchar(10);
}
