#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to terminal.
 * @filename: file path and name.
 * @letters: The number of letters to cpoied
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_size, w_size;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	r_size = read(fd, buffer, letters);
	if (r_size == -1)
	{
		free(buffer);
		return (0);
	}
	w_size = write(STDOUT_FILENO, buffer, r_size);
	if (w_size == -1 || r_size != w_size)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w_size);
}

