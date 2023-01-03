#include "main.h"

/**
 * puts2 - prints every other line
 * @str: the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
while (str != 0)
{
_putchar(*str);
str += 2;
}
}
