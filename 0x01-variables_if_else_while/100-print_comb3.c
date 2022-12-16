#include <stdio.h>
/**
 * main - print number pairs (no dups)
 * Return: 0 if succes
 */
int main(void)
{
int i = 48;
int c = 1;
while (i < 58)
{
int j = 48 + c;
while (j < 58)
{
putchar(i);
putchar(j);
if ((i != 56) || (j != 57))
{
putchar(44);
putchar(32);
}
j++;
}
c++;
i++;
}
putchar(10);
return (0);
	}
