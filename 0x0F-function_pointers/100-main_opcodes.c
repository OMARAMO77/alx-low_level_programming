#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 or 2 otherwise
 */
int main(int argc, char *argv[])
{
	int bytes, c;
	unsigned char *fun_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fun_ptr = (unsigned char *)main;
	c = 0;
	if (bytes > 0)
	{
		while (c < (bytes - 1))
			printf("%02hhx ", fun_ptr[c++]);
		printf("%hhx\n", fun_ptr[c]);
	}
	return (0);
}
