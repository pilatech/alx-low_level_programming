#include <stdio.h>
/**
 * main - to print lower and upper case alphabet
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
ch = 65;

while (ch < 90)
{
	putchar(ch);
	ch++;
}
putchar(10);
return (0);
}
