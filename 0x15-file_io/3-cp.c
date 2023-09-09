#include "main.h"
/**
 * main - copy file content.
 * @ac: number of arguments.
 * @av: arguments vector.
 *
 * Return: exit status.
 */
int main(int ac, char **av)
{
	char *buff;
	int wd, rd, st;


	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rd = open(av[1], O_RDONLY);
	if (rd == -1)
		_fileerr(av[1], 'r', 98);
	wd = open(av[2], O_WRONLY | O_EXCL | O_CREAT | O_APPEND,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (errno == EEXIST)
		wd = open(av[2], O_WRONLY | O_TRUNC);
	if (wd == -1)
		_fileerr(av[2], 'w', 99);
	buff = malloc(1024);
	st = read(rd, buff, 1024);
	if (st == -1)
		_fileerr(av[2], 'r', 98);
	if (write(wd, buff, 1024) == -1)
		_fileerr(av[2], 'w', 99);
	free(buff);
	if (close(wd) == -1)
		_closeerr(wd);
	if (close(rd) == -1)
		_closeerr(rd);
	return (0);
}

/**
 * _closeerr - handle file closing error.
 * @d: the descriptor.
 *
 * Return: Nothing.
 */
void _closeerr(int d)
{
	dprintf(STDERR_FILENO, "Can't close fd %d\n", d);
	exit(100);
}

/**
 * _fileerr - handle file error.
 * @file: the file that brought an error.
 * @mode: the mode at which it was being opened.
 * @s_code: the status code.
 *
 * Return: Nothing.
 */
void _fileerr(char *file, char mode, int s_code)
{
	if (mode == 'w')
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	if (mode == 'r')
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(s_code);
}
