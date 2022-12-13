#include <stdio.h>
/**
 * main - to print 0 - 9
 * Return: 0 if successful otherwise nonzero
 */
int main(void)
{
int n = 48;

while (n < 58)
{
	putchar(n);
	n++;
}
putchar(10);
return (0);
}
