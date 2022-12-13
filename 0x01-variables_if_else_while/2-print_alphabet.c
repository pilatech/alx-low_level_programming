#include <stdio.h>
/**
 * main - to printou lowercase alphabet
 * Return: 0 if successful otherwise nonzero
 */
int main(void)
{
int ch = 97;

while (ch <= 122)
{
	putchar(ch);
	ch++;
}
putchar(10);
return (0);
}
