#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguements passed into it
 * @argc: The argument counter
 * @argv: The argument values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
