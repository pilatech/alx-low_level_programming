#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @num: the number
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
if (num < 0)
	num = -num;
_putchar(48 + (num % 10));
return (num % 10);
}
