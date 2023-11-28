#include "main.h"

/**
 * create_file - creates a file
 * @filename: the fike namr
 * @text_content: tje xontent
 *
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i, wr;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		wr = write(file, text_content, i);
		if (wr != i)
			return (-1);
	}
	close(fp);
	return (1);
}
