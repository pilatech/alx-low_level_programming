#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * main - do calculations.
 * @argc: number of arguments.
 * @argv: the arguments.
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int isMod;
	int isDiv;
	int answer;

	isMod = (strstr(argv[2], "%") == 0);
	isDiv = (strstr(argv[2], "/") == 0);
	if ((argc != 4))
	{
		printf("%s\n", "Error");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((isDiv || isMod) && atoi(argv[3]) == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	answer = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", answer);
	return (0);
}
