#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard ouput.
 * @filename: text file
 * @letters: number of letters to be read
 * Return: number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t rd;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	rd = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (rd);
}

