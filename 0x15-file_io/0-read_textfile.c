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

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	num_read = read(fd, buff, letters);
	if (num_read == -1)
		return (0);
	num_writen = write(STDIN_FILENO, buff, num_read);
	if (num_writen == -1)
		return (0);
	free(buff);
	close(fd);
	return (num_writen);
}
