#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the standard output.
  * @filename: filename
  * @letters: number of letters it should read and print
  *
  * Return: number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, counter;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	counter = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, counter);

	free(buffer);
	close(fd);
	return (counter);
}
