#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rw;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content && *(text_content + lenght))
	{
		lenght++;
	}
	rw = write(fd, text_content, lenght);
	close(fd);
	if (rw == -1)
		return (-1);
	return (1);
}
