#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, w_size;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		text_content = "";
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!fd)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	w_size = write(fd, text_content, len);
	if (w_size == -1)
		return (-1);
	close(fd);
	return (1);
}
