#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: filename
 * @text_content: file content
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writtenBytes, text_count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[text_count] != '\0')
		text_count++;

	writtenBytes = write(fd, text_content, text_count);

	if (writtenBytes < 0)
		return (-1);

	close(fd);
	return (1);
}
