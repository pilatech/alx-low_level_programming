#include "main.h"
/**
 * cap_string - capitalize all words of a string.
 * @str: the string.
 *
 * Return: the capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		else if (is_sep(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - ('a' - 'A');
			i++;
		}
		i++;
	}
	return (str);
}

/**
 * is_sep - checks if a character is one of the seperators.
 * @c: the character to check.
 *
 * Return: 1 if it's a seperator and 0 if it is not.
 */
int is_sep(char c)
{
	char seps[] = {' ', '\t', '\n', ',', ';', '.', '!',
	'?', '"', ')', '(', '}', '{'};
	int i;

	for (i = 0; i < 13; i++)
	{
		if (c == seps[i])
			return (1);
	}
	return (0);
}
