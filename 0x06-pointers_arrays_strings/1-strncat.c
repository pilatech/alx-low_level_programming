#include "main.h"
/**
* _strncat - concatenate strings
* Return: concatednated string
* @dest: start at
* @src: added
* @n: max size to add
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\n')
	i++;
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\n';
return (dest);
}
