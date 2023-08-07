#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to add
 *
 * Return: If the function fails or filename is NULL 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, read, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	read = write(o, text_content, len);

	if (o == -1 || read == -1)
		return (-1);

	close(o);

	return (1);
}

