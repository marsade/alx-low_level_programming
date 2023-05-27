#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: string to be added at the end of the file
  *
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwr, len;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	nwr = write(fd, text_content, len);
	if (nwr == -1 || fd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
