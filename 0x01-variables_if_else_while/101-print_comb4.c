#include <stdio.h>
/**
 * main - print number pairs (no dups)
 * Return: 0 if succes
 */
int main(void)
{
int i = 48;
int j = 49;
while (i < 58)
{
putchar(i);
	while (j < 58)
	{
	putchar(i);
	putchar(j);
	putchar(32);
	j++;
	}
i++;
}
putchar(10);
return (0);
}
