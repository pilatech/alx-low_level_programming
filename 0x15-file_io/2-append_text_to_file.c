#include "main.h"
/**
 * append_text_to_file - append text to a given file :)
 * @filename: name of the file to append text to.
 * @text_content: the text to append.
 *
 * Return: 1 on Success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, writen;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	size = 0;
	if (!text_content)
		size = 0;
	else
	{
		while (text_content[size])
			size++;
	}
	writen = write(fd, text_content, size);
	if (writen == -1)
		return (-1);
	close(fd);
	return (1);
}
