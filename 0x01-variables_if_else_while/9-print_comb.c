#include <stdio.h>
/**
 * main - to print 0 - 9 combinations
 * Return: 0 if successful otherwise nonzero
 */
int main(void)
{
int n = 48;

while (n < 58)
{
	putchar(n);
	if (n != 57)
	{
	putchar(44);
	putchar(32);
	}
	n++;
}
putchar(10);
return (0);
}
