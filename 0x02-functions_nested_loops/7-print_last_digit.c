#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @num: the number
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
int ch, last;
if (num < 0)
	num = -num;
last = num % 10;
ch = 48 + last;
_putchar(ch);
return (last);
}
