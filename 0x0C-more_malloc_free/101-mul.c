#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int checkdigit(char *p[], int ac);
/**
 * main - multiply
 * @argc: argument count
 * @argv: argument array
 * Return: result
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if ((argc < 3 && argc > 4))
	{
		printf("Error\n");
		exit(98);
	}
	if (checkdigit(argv, argc))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
/**
 * checkdigit - check for digit
 * @p: array pointer
 * @ac: number of argument
 * Return: failur or success
 */

int checkdigit(char *p[], int ac)
{
	int i, j;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; p[i][j] != '\0'; j++)
		{
			if (!(p[i][j] >= '0' && p[i][j] <= '9'))
				return (1);
		}
	}
	return (0);
}
