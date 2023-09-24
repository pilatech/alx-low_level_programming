#include "main.h"
#include <stdio.h>

/**
  *rev_string- prints in reverse
  *_strlen- count
 *@s: checked
 *Return: nothing
 */
void rev_string(char *s)
{
	int len, start, end, center;
	char temp;

	if (s)
	{
		len = _strlen(s);
		center = len / 2;
		for (start = 0, end = len - 1; start < center; start++, end--)
		{
			temp = s[start];
			s[start] = s[end];
			s[end] = temp;
		}
	}
}

/**
 * _strlen - find length of a string.
 * @str: the string.
 *
 * Return: the length.
 */
int _strlen(char *str)
{
int len = 0;

while (str[len])
	len++;
return (len);
}


