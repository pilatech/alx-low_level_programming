#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: the character to check
 *
 * Return: 1 if lower and 0 otherwise
 */

int _islower(int c)
{
if ((c > 96) && (c < 123))
	return (1);
else
	return (0);
}
