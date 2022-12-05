#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of the text file
 * @letters: number of letters to read and print
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_fd, r_fd, w_fd;
	char *buffer;

	/* open file */
	o_fd = open(filename, O_RDONLY);
	if (o_fd == -1)
		return (0);
	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);
	r_fd = read(o_fd, buffer, letters);
	if (r_fd == -1)
	{
		free(buffer);
		close(o_fd);
		return (0);
	}
	w_fd = write(STDOUT_FILENO, buffer, r_fd);
	free(buffer);
	close(o_fd);
	if (w_fd == -1 || w_fd != r_fd)
		return (0);
	else
		return (w_fd);
}
