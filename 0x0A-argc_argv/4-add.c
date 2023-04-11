#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The argument counter
 * @argv: The argument values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int n, res = 0, c;

	while (argc-- > 1)
	{
		for (c = 0; argv[argc][c]; c++)
		{
			if (!(isdigit(argv[argc][c])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		res += n;
	}
	printf("%d\n", res);
	return (0);
}
