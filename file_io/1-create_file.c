#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: string filename
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_size, len = 0;
	char *p = text_content;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	while (*p)
	{
		len++;
		p++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w_size = write(fd, text_content, len);
	if (w_size == -1)
		return (-1);
	close(fd);
	return (1);
}

