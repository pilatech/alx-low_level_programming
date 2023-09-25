#include "main.h"
/**
 * _strncpy - copy string from one space to another.
 * @dest: where to copy to.
 * @src: where to copy from.
 * @n: number of bytes to copy upto.
 *
 * Return: the destination pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* if the src <= n ===> copy it */
	/* else copy the src upt n bytes */
	int len;
	int i = 0;

	for (len = 0; src[len] != '\0'; len++)
		;
	if (len < n)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}

	}
	return (dest);
}
