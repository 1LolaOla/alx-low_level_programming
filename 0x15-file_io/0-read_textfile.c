#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: filename
 * @letters: no of chars written
 *
 * Return: int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	int fd, readBytes, writtenBytes;

	fd = open(filename, O_RDONLY);

	if (!buf || filename == NULL || fd < 0)
	{
		free(buf);
		return (0);
	}

	readBytes = read(fd, buf, letters);

	if (readBytes < 0)
	{
		free(buf);
		return (0);
	}

	close(fd);

	writtenBytes = write(STDOUT_FILENO, buf, readBytes);

	if (writtenBytes < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);

	return (writtenBytes);
}
