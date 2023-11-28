#include "main.h"

/**
 * append_text_to_file - appends trxt to file
 * @filename: the filenamr
 * @text_content: the text content
 *
 * Return: 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
		;
		fd = open(filename, O_WRONLY | O_APPEND);
		w = write(fd, text_content, len);
		if (fd == -1 || w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
