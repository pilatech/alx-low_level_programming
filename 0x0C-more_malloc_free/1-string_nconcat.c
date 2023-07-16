#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes from the second string to concatenate with the first.
 *
 * Return: pointer to the newly created string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l1;
	unsigned int l2;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l2 = _strlen(s2);
	if (n >= l2)
		n = l2;

	l1 = _strlen(s1);

	str = malloc(l1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';
	return (str);
}

/**
 * _strlen - check length of a string.
 * @s: the string to check
 *
 * Return: the length
 */

unsigned int _strlen(char *s)
{
	unsigned int l;
	unsigned int i;

	l = 0;
	i = 0;
	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}
