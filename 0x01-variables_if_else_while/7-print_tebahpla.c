#include <stdio.h>
/**
 * main - to print lowercase alphabet in reverse
 * Return: 0 if successful otherwise nonzero
 */
int main(void)
{
int ch = 122;

while (ch >= 97)
{
	putchar(ch);
	ch--;
}
putchar(10);
return (0);
}
