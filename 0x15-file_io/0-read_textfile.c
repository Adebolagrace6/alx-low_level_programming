#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file being read
 * @letters: letters to be read
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t fs;
	ssize_t ft;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	ft = read(fd, buf, letters);
	fs = write(STDOUT_FILENO, buf, ft);

	free(buf);
	close(fd);
	return (fs);
}
