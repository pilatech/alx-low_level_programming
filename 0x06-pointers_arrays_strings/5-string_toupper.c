#include "main.h"
/**
 * string_toupper - change string to uppercase.
 * @str: the string to change.
 *
 * Return: the changed string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
