#include <stdio.h>
/**
 * main - print number pairs (no dups)
 * Return: 0 if succes
 */
int main(void)
{
int i = 48;
int c = 1;
int d = 2;
while (i < 58)
{
int j = 48 + c;
while (j < 58)
{
int k = 48 + d;
while (k < 58)
{
	putchar(i);
	putchar(j);
	putchar(k);
	if ((i != 55) || (j != 56) || (k != 57))
	{
	putchar(44);
	putchar(32);
	}
	k++;
	d++;
}
j++;
}
c++;
i++;
}
putchar(10);
return (0);
	}
