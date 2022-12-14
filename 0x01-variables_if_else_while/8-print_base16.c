#include <stdio.h>
/**
 * main - to print hexadecimals
 * Return: 0 if successful otherwise nonzero
 */
int main(void)
{
int ch = 48;

while (ch <= 57)
{
	putchar(ch);
	ch++;
}
ch = 97;

while (ch <= 102)
{
	putchar(ch);
	ch++;
}
putchar(10);
return (0);
}
