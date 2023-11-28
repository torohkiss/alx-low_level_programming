#include "main.h"

/**
 * read_textfile - reads textfile
 * @filename: the file name
 * @letters: number of letters it should read and print
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
