#include "main.h"

#define BUFFER_SIZE 1024

/**
 * close_file - close files
 * @fd: file descriptor
 * Return: void
 */
void close_file(int fd)
{
	int close_val;

	close_val = close(fd);

	if (close_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * alloc_buffer - allocates a memory buffer
 * @filename: filename to refer incase of error
 * Return: buffer
 */
char *alloc_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char *) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * main - Entry point
 * @argc: no. of cmd-line argument
 * @argv: array of cmd-line argument
 * Return: pending
 */
int main(int argc, char **argv)
{
	char *file_to;
	char *file_from;
	char *buffer;
	int fd_from, fd_to, fd_write, fd_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	buffer = alloc_buffer(file_to);
	fd_from = open(file_from, O_RDONLY);
	fd_read = read(fd_from, buffer, BUFFER_SIZE);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || fd_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					file_from);
			free(buffer);
			exit(98);
		}

		fd_write = write(fd_to, buffer, fd_read);
		if (fd_to == -1 || fd_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					file_to);
			free(buffer);
			exit(99);
		}
		fd_read = read(fd_from, buffer, 1024);
		fd_to = open(file_to, O_WRONLY | O_APPEND);
	} while (fd_read > 0);

	free(buffer);
	close_file(fd_from);
}
