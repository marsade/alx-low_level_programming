#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t b_read, w_size;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	b_read = read(fd, buffer, letters);
	if (b_read == -1)
	{
		close(fd);
		return (0);
	}
	w_size = write(STDOUT_FILENO, buffer, letters);
	if (w_size == -1)
		return (0);
	close(fd);
	free(buffer);
	return (b_read);
}
