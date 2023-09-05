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
	int fd;
	int od;
	int writen;
	int size;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, S_IWUSR | S_IRUSR);
	if (errno == EEXIST)
	{
		od = open(filename, O_WRONLY);
		if (od == -1)
			return (-1);
		return (1);
	}
	if (fd == -1)
		return (-1);
	size = 0;
	while (text_content[size] != '\0')
	{
		size++;
		printf("%d\n", size);
	}
	if (!size)
		return (1);
	writen = write(fd, text_content, size + 1);
	if (writen == -1)
		return (-1);
	return (1);
}
