#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename:  name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_size, len = 0;
	char *p = text_content;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (*p)
		{
			len++;
			p++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return -1;
	}
	w_size = write(fd, text_content, len);
	if (w_size == -1)
		return (-1);
	close(fd);
	return (1);
}

