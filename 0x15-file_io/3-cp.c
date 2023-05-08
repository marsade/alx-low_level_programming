#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFFER_SIZE 1024
/**
  * error_code - checks if file can be opened and copied or exists
  * @file_from: file to copy from
  * @file_to: file to copy to
  * @argv: argument vector
  * @exit_code - exit code
  */
void error_code(char *argv[], int file_from, int file_to)
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
}
/**
  * main - copies the content of a file to another
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_f;
	ssize_t nrd, nwd;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_code(argv, file_from, file_to);

	while ((nrd = read(file_from, buf, 1024)) > 0)
	{
		nwd = write(file_to, buf, nrd);

		if (nwd == -1)
		{
			error_code(argv, 0, -1);
		}
	}
	close_f = close(file_from);
	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_from);
		exit(100);
	}
	close_f = close(file_to);
	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
