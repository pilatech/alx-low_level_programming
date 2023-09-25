#include "main.h"
#include <stdio.h>
/**
* _strncat - concatenate strings
* Return: concatednated string
* @dest: start at
* @src: added
* @n: max size to add
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i, j = 0;

	for (len = 0; src[len] != '\0'; len++)
		;
	for (i = 0; dest[i] != '\0'; i++)
		;

	if (len <= n)
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	else
	{
		while (j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
