#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of the file
  * @text_content: content to be in the file
  * Return: 1 if successful, -1 if it fails
  */
int create_file(const char *filename, char *text_content)
{
	int fd, len, nwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;
	nwr = write(fd, text_content, len);

	if (nwr == -1 || nwr != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
