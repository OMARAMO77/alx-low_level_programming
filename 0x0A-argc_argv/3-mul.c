#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The argument counter
 * @argv: The argument values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int n, m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
		return (0);		
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
