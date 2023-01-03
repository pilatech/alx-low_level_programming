#include "main.h"

/**
 * _isdigit - checks i character is digit
 * @c: the character
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
if ((c > 47) && (c < 58))
	return (1);
else
	return (0);
}
