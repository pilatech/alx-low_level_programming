#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into a leet.
 * @str: the string.
 *
 * Return: the encoded string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char leets[][3] = {{'a', 'A', '4'}, {'e', 'E', '3'},
		{'o', 'O', '0'}, {'t', 'T', '7'}, {'l', 'L', '1'}};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leets[j][0] || str[i] == leets[j][1])
				str[i] = leets[j][2];
		}
		i++;
	}
	return (str);
}
