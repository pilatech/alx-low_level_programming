#ifndef __IO
#define __IO

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _close(int fd, int ret);
int append_text_to_file(const char *filename, char *text_content);

#endif
