#include "main.h"

/**
 * _puts_recursion - print word recursively
 * @s: the string to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s + 0);
	_puts_recursion(s + 1);
}
