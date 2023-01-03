#include "main.h"

/**
 * _isupper - checks whether a letter is uppercase or not
 * @c: the letter
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
if ((c > 64) && (c < 91))
	return (1);
else
	return (0);
}
