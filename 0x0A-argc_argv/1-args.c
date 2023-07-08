#include "main.h"
/**
 * main - print number of arguments given to a programme.
 *
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	_putchar(argc - 1 + '0');
	_putchar('\n');
	return (0);
}
