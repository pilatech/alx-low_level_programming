#include "main.h"

/**
 * read_textfile - read text file.
 * @filename: the file to read from.
 * @letters: the number of letters to read.
 *
 * Return: Number of counted characters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t num_read, num_writen;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	num_read = read(fd, buff, letters);
	if (num_read == -1)
		return (shutdown(fd, buff, 0));
	num_writen = write(STDOUT_FILENO, buff, num_read);
	if (num_writen == -1)
		return (shutdown(fd, buff, 0));
	return (shutdown(fd, buff, num_writen));
}

/**
 * shutdown - cleans stuffup before leaving the function.
 * @fd: file descriptor to be closed.
 * @buff: buffer to be freed.
 * @val: value to return.
 *
 * Return: status code
 */

ssize_t shutdown(int fd, char *buff, ssize_t val)
{
	close(fd);
	free(buff);
	return (val);
}
