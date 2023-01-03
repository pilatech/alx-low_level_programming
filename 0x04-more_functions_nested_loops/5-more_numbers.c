#include "main.h"

/**
 * more_numbers - print numbers to 14 * 10
 *
 * Return: nothing
 */

void more_numbers(void)
{
int a = 0, int i;
while (a < 10)
{
i = 48;
	while (i < 58)
	{
	_putchar(i);
	i++;
	}
putchar(10);
a++;
}
}
