#include <stdio.h>
/**
 * main - to print lower alphabe -eq
 * Return: 0 if successful otherwise nonzero
 */
int main(void)
{
int ch = 97;

while (ch <= 122)
{
	if ((ch != 101) && (ch != 113))
		putchar(ch);
	ch++;
}
putchar(10);
return (0);
}
