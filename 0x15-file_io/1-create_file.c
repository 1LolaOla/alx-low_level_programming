#include "main.h"

/**
 * create_file - creates files
 * @filename: file to create
 * @text_content: text content of file
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, writtenBytes;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	i = 0;
	while (text_content[i] != '\0')
		i++;

	writtenBytes = write(fd, text_content, i);

	if (writtenBytes < 0)
		return (-1);

	close(fd);

	return (1);
}
