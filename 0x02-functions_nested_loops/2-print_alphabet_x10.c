#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10times
 * Return: nothing
 */

void print_alphabet_x10(void)
{
int i = 0;
int j;
while (i < 10)
{
	j = 97;
	while (j < 123)
	{
	_putchar(j);
	j++;
	}
_putchar(10);
i++;
}
}
