#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: the first string.
 * @s2:the second string.
 *
 * Return: 0 if equal, -ve if first larger, +ve if second larger.
 */
int _strcmp(char *s1, char *s2)
{
	int len1, len2, i;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (len1 > len2)
	{
		while (len2 < len1)
		{
			s2[len2] = '\0';
			len2++;
		}
	}
	else if (len1 < len2)
	{
		while (len1 < len2)
		{
			s1[len1] = '\0';
			len1++;
		}
	}
	i = 0;
	while (i < len1)
	{
		if ((s1[i] - s2[i]) != 0)
			return (s1[i] - s2[i]);
		i++;
	}
		return (0);
}
