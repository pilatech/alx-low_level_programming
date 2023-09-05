#include "main.h"
#include <stdio.h>

/**
 * create_file - create file and add text in it.
 * @filename: name of the created file.
 * @text_content: the text to add.
 *
 * Return: 1 on succes -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writen, size;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, S_IWUSR | S_IRUSR);
	if (errno == EEXIST)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (_close(fd, -1));
		return (_close(fd, 1));
	}
	if (fd == -1)
		return (_close(fd, -1));
	if (text_content)
	{
		size = 0;
		while (text_content[size] != '\0')
			size++;
		if (!size)
			return (_close(fd, -1));
		writen = write(fd, text_content, size + 1);
		if (writen == -1)
			return (_close(fd, -1));
	}
	return (_close(fd, 1));
}

/**
 * _close - close file descriptor and return;
 * @fd: descriptor.
 * @ret: return value.
 *
 * Return: the value to be returned.
 */

int _close(int fd, int ret)
{
	close(fd);
	return (ret);
}
