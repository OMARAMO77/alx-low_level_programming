#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 on success, exits on failure
 */
int main(int argc, char **argv)
{
	int fdfrom, fdto, fdr, fdw, fdfromc, fdtoc;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	fdr = read(fdfrom, buffer, 1024);
	if (fdr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (fdr)
	{
		fdw = write(fdto, buffer, fdr);
		if (fdw == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	fdfromc = close(fdfrom);
	if (fdfromc == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom), exit(100);
	fdtoc = close(fdto);
	if (fdtoc == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto), exit(100);
	return (0);
}
