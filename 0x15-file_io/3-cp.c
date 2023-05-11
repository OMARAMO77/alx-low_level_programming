#include "main.h"

int error_close(int);
/**
 * main - copies the content of a file to another file
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int fdr = 1, fdfrom, fdto, fdw, error;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdto = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		error_close(fdfrom);
		exit(99);
	}

	while (fdr)
	{
		fdr = read(fdfrom, buff, 1024);
		if (fdr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			error_close(fdfrom);
			error_close(fdto);
			exit(98);
		}
		else if (fdr == 0)
			break;
		fdw = write(fdto, buff, fdr);
		if (fdw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			error_close(fdfrom);
			error_close(fdto);
			exit(99);
		}
	}
	error = error_close(fdto);
	if (error < 0)
	{
		error_close(fdfrom);
		exit(100);
	}
	error = error_close(fdfrom);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * error_close - closes a file and prints error when closed file
 * @file_to_close: Description error for closedfile
 * Return: 1 on success, -1 on failure
 */
int error_close(int file_to_close)
{
	int error;

	error = close(file_to_close);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_close);
	return (error);
}
