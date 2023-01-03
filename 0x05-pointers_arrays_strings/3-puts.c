#include "main.h"

/**
 * _puts - prints give string followed by a new line
 * @s: the string
 *
 * Return: nothing
 */

void _puts(char *s)
{
while (*s != 0)
{
_putchar(*s);
s++;
}
_putchar(10);
}
