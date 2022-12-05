#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file
 * @text_content: content to append to file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w_ret;
	int len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		w_ret = write(file, text_content, len);
	}
	close(file);
	if (w_ret != len)
		return (-1);
	return (0);
}
