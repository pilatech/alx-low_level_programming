#include "main.h"

/**
 *	main - prints programme name
 *
 *	@argc: number of arguments
 *	@argv: list of arguments
 *
 *	Return: always 0 (Succes)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	char *c;

	c = argv[0];

	while (*c != '\0')
	{
		_putchar(*c + 0);
		c++;
	}
		_putchar('\n');
	return (0);
}
