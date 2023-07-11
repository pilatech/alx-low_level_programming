#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 *
 * Return: a duplicate string
 */

char *_strdup(char *str)
{
	int size;
	int i;
	char *mv;
	char *dupstr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 1;
	mv = str;
	while (*mv != '\0')
	{
		size++;
		mv++;
	}
	dupstr = (char *)malloc(size);
	if (dupstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dupstr[i] = *str;
		str++;
	}
	return (dupstr);
}
