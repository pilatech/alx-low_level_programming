#include <stdlib.h>
#include <stdio.h>

/**
 * main - print opcode for main
 * @argc: number of argument.
 * @argv: array of arguments.
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int i;
	char b;
	FILE *fp;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	char *c = (char *)main;

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%x ", *(c + i));
	}
	printf("\n");
	return (0);
}
