#include "main.h"

int error_close(int);
/**
 * main - copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int bytes_read = 0, _EOF = 1, file_from = -1, file_to = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		error_close(file_from);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(file_from, buff, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			error_close(file_from);
			error_close(file_to);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		bytes_read += _EOF;
		error = write(file_to, buff, _EOF);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			error_close(file_from);
			error_close(file_to);
			exit(99);
		}
	}
	error = error_close(file_to);
	if (error < 0)
	{
		error_close(file_from);
		exit(100);
	}
	error = error_close(file_from);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * error_close - A function that closes a file and prints error when closed file
 * @description: Description error for closedfile
 * Return: 1 on success, -1 on failure
 */
int error_close(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}
