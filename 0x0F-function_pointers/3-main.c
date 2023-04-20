#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0: success, 98: argc!=4, 99 unidentified operator
 */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
