#include "main.h"
/**
 * puts_half- print half
 * @str: checked
 * Return: nothing
 */
void puts_half(char *str)
{
	/* make sure the string is actually not NULL */
	/* get length of the string */
	/* divide the length by 2 to get the index to start at */

	int i;

	if (str)
	{
		len = _strlen(str);
		if (len % 2 == 0)
			i = len / 2;
		else
			i = (len - 1) / 2 + 1;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}

/**
 * _strlen - find length of a string.
 * @str: the string.
 *
 * Return: length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
