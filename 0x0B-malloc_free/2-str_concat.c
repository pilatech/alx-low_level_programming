#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenation of two strings
 */

char *str_concat(char *s1, char *s2)
{
	int size, i;
	char *constr, *mv;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = 1;
	mv = s1;
	while (*mv != '\0')
	{
		size++;
		mv++;
	}
	mv = s2;
	while (*mv != '\0')
	{
		size++;
		mv++;
	}
	constr = (char *)malloc(size);
	if (constr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*s1 != '\0')
	{
		constr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		constr[i] = *s2;
		s2++;
		i++;
	}
	constr[i] = '\0';
	return (constr);
}
