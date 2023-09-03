#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number.
 * @n: the number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	long int pow;
	long int h_square;

	pow = 0;
	h_square = 1;
		while ((n >> pow) > 1)
		{
			h_square *= 2;
			pow++;
		}
	while (h_square > 0)
	{
		if ((n >> pow) == 1)
		{
			_putchar('1');
			n = n - h_square;
		}
		else
			_putchar('0');
		h_square >>= 1;
		pow--;
	}
}
