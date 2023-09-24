#include "holberton.h"
#include <stdio.h>

/**
  *rev_string- prints in reverse
  *_strlen- count
 *@s: checked
 *Return: nothing
 */
int _strlen(char *str)
{
int len;

len = 0;
while (str[len])
	len++;
printf("Length of %s => %d\n", str, len);
return (len);
}

void rev_string(char *str)
{
	_strlen(str);
}
