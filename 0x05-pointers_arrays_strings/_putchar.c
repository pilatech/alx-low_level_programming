#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character.
 * @c: the character code.
 */

void _putchar(int c)
{
	write(1, &c, 1);
}
