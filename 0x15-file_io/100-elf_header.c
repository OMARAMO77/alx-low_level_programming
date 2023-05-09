#include "main.h"

/**
 * main - Tdisplays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 on success, error code on failure
 */

int main(int argc, char **argv)
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
