#include "main.h"

/**
 * puts2 - prints every other line
 * @str: the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
_putchar(*str);
while (*str != 0)
{
_putchar(*(str + 2));
str++;
}
}
