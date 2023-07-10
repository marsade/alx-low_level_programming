#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 on succeess -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, w_size;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		w_size = write(fd, text_content, len);

		if (w_size == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
