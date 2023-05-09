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
	int fd;
	int lenght = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, lenght);

	close(fd);
	return (1);
}

/**
  * _strlen - returns the length of a string
  * @s: string
  *
  * Return: length of the string
  */
int _strlen(char *s)
{
	int len = 0;

	while (s)
		len++;
	return (len);
}
