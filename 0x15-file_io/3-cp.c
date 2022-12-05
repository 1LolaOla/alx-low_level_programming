#include "main.h"

void write_error_check(int writtenBytes, char *args[], int fd_from);
void read_error_check(int readBytes, char *args[]);
void close_error_check(int fd);

/**
 * main - entry
 * @argc: arg count
 * @args: command line args
 *
 * Return: int
 */

int main(int argc, char **args)
{
	int fd_to = 0, fd_from = 0, writtenBytes = 0, readBytes = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(args[1], O_RDONLY);

	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}

	fd_to = open(args[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);

	if (fd_to < 0)
	{
		printf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
	while ((readBytes = read(fd_from, buffer, 1024)) > 0)
	{
		writtenBytes = write(fd_to, buffer, readBytes);
		write_error_check(writtenBytes, args, fd_from);
	}

	read_error_check(readBytes, args);
	close_error_check(fd_from);
	close_error_check(fd_to);

	return (0);
}

/**
 * write_error_check - checks write errors
 * @writtenbytes: bytes written
 * @args: command line args
 * @fd_from: file descriptor for file to copy from
 *
 * Return: void
 */

void write_error_check(int writtenbytes, char *args[], int fd_from)
{
	if (writtenbytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		close_error_check(fd_from);
		exit(99);
	}
}

/**
 * read_error_check - checks read errors
 * @readbytes: bytes read
 * @args: command line args
 *
 * Return: void
 */

void read_error_check(int readbytes, char *args[])
{
	if (readbytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
}

/**
 * close_error_check - checks close errors
 * @fd: file descriptor
 *
 * Return: void
 */

void close_error_check(int fd)

{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd)
		exit(100);
	}
}






