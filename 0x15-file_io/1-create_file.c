#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content to store in the file
 * Return: 1 success or 0 failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, w_ret, len;

	if (filename == NULL)
		return (0);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		w_ret = write(file, text_content, len);
		if (len != w_ret)
			return (0);
	}

	close(file);
	return (1);
}
