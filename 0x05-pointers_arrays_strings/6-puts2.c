#include "main.h"
/**
 * puts2- print skip one number
 * @str: the string to print from.
 *
 * Return:nothing
 */
void puts2(char *str)
{

	int i = 0;

	if (str)
	{
		while (*(str + i) != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}

